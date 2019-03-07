/**
Copyright 2019 Siddhi-LLVM Team
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include <iostream>

#include <librdkafka/rdkafkacpp.h>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/lexical_cast.hpp>
#include <boost/uuid/uuid_io.hpp>


class ExampleDeliveryReportCb : public RdKafka::DeliveryReportCb {
public:
    void dr_cb (RdKafka::Message &message) {
        std::string status_name;
        switch (message.status())
        {
            case RdKafka::Message::MSG_STATUS_NOT_PERSISTED:
                status_name = "NotPersisted";
                break;
            case RdKafka::Message::MSG_STATUS_POSSIBLY_PERSISTED:
                status_name = "PossiblyPersisted";
                break;
            case RdKafka::Message::MSG_STATUS_PERSISTED:
                status_name = "Persisted";
                break;
            default:
                status_name = "Unknown?";
                break;
        }
        std::cout << "Message delivery for (" << message.len() << " bytes): " <<
                  status_name << ": " << message.errstr() << std::endl;
        if (message.key())
            std::cout << "Key: " << *(message.key()) << ";" << std::endl;
    }
};

class Producer{

    std::string errstr;

    std::string message;


public: void start_producing(std::vector<std::string> message_array ,   std::string brokers ,int32_t partition, std::string topic_str ) {


        boost::uuids::uuid uuid = boost::uuids::random_generator()();


        std::vector<char> message_v(message.begin(), message.end());

        std::vector<char> key_v(uuid.begin(), uuid.end());


        RdKafka::Conf *conf = RdKafka::Conf::create(RdKafka::Conf::CONF_GLOBAL);
        RdKafka::Conf *tconf = RdKafka::Conf::create(RdKafka::Conf::CONF_TOPIC);


        RdKafka::Headers *headers = RdKafka::Headers::create();
        headers->add("my header", "header value");
        headers->add("other header", "yes");


        conf->set("metadata.broker.list", brokers, errstr);
        conf->set("default_topic_conf", tconf, errstr);


        ExampleDeliveryReportCb ex_dr_cb;

        conf->set("dr_cb", &ex_dr_cb, errstr);


        RdKafka::Producer *producer = RdKafka::Producer::create(conf, errstr);
        if (!producer) {
            std::cerr << "Failed to create producer: " << errstr << std::endl;
            exit(1);
        }

        std::cout << "Created producer " << producer->name() << std::endl;


        RdKafka::Topic *topic = RdKafka::Topic::create(producer, topic_str, tconf, errstr);



        for (std::vector<std::string>::size_type i=0 ; i != message_array.size() ; i++) {


            RdKafka::ErrorCode resp =
                    producer->produce(topic_str, partition,
                                      RdKafka::Producer::RK_MSG_COPY,
                                      const_cast<char *>(message_array[i].c_str()), message_array[i].size(),
                                      NULL, 0,
                                      0,
                                      headers,
                                      NULL);

            if (resp != RdKafka::ERR_NO_ERROR) {
                std::cerr << "% Produce failed: " <<
                          RdKafka::err2str(resp) << std::endl;

            } else {
                std::cerr << " Produced message " <<
                          std::endl;
            }

            producer->poll(1000);


        }
    }


};

int main(void){

    std::vector<std::string> messages;
    messages.push_back("I am");
    messages.push_back("a");

Producer producer;
producer.start_producing(messages , "localhost:9092" , 0 , "test");



}
