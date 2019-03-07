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
#include <string>
#include <cstdlib>
#include <cstdio>
#include <csignal>
#include <cstring>


#include <librdkafka/rdkafkacpp.h>


static bool run = true;
static bool exit_eof = false;
static int eof_cnt = 0;
static int partition_cnt = 0;
static int verbosity = 1;
static long msg_cnt = 0;
static int64_t msg_bytes = 0;

static void sigterm(int sig) {
    run = false;
}


class ExampleEventCb : public RdKafka::EventCb {
public:
    void event_cb(RdKafka::Event &event) {
        switch (event.type()) {
            case RdKafka::Event::EVENT_ERROR:
                if (event.fatal()) {
                    std::cerr << "FATAL ";
                    run = false;
                }
                std::cerr << "ERROR (" << RdKafka::err2str(event.err()) << "): " <<
                          event.str() << std::endl;
                break;

            case RdKafka::Event::EVENT_STATS:
                std::cerr << "\"STATS\": " << event.str() << std::endl;
                break;

            case RdKafka::Event::EVENT_LOG:
                fprintf(stderr, "LOG-%i-%s: %s\n",
                        event.severity(), event.fac().c_str(), event.str().c_str());
                break;

            case RdKafka::Event::EVENT_THROTTLE:
                std::cerr << "THROTTLED: " << event.throttle_time() << "ms by " <<
                          event.broker_name() << " id " << (int) event.broker_id() << std::endl;
                break;

            default:
                std::cerr << "EVENT " << event.type() <<
                          " (" << RdKafka::err2str(event.err()) << "): " <<
                          event.str() << std::endl;
                break;
        }
    }
};


class ExampleRebalanceCb : public RdKafka::RebalanceCb {
private:
    static void part_list_print(const std::vector<RdKafka::TopicPartition *> &partitions) {
        for (unsigned int i = 0; i < partitions.size(); i++)
            std::cerr << partitions[i]->topic() <<
                      "[" << partitions[i]->partition() << "], ";
        std::cerr << "\n";
    }

public:
    void rebalance_cb(RdKafka::KafkaConsumer *consumer,
                      RdKafka::ErrorCode err,
                      std::vector<RdKafka::TopicPartition *> &partitions) {
        std::cerr << "RebalanceCb: " << RdKafka::err2str(err) << ": ";

        part_list_print(partitions);

        if (err == RdKafka::ERR__ASSIGN_PARTITIONS) {
            consumer->assign(partitions);
            partition_cnt = (int) partitions.size();
        } else {
            consumer->unassign();
            partition_cnt = 0;
        }
        eof_cnt = 0;
    }
};



class Consumer {

    std::vector<std::string> message_array;
    std::string errstr;
    std::string topic_str;
    std::vector<std::string> topics;
    std::string mode;


    void process(std::string message) {
        std::cout << message << std::endl;
        message_array.push_back(message);
    }

    void msg_consume(RdKafka::Message *message, void *opaque) {
        switch (message->err()) {
            case RdKafka::ERR__TIMED_OUT:
                break;

            case RdKafka::ERR_NO_ERROR:
                msg_cnt++;
                msg_bytes += message->len();
               
                process(static_cast<const char *>(message->payload()));


                break;


            case RdKafka::ERR__PARTITION_EOF:
               
                if (exit_eof && ++eof_cnt == partition_cnt) {
                    std::cerr << "%% EOF reached for all " << partition_cnt <<
                              " partition(s)" << std::endl;
                    run = false;
                }
                break;

            case RdKafka::ERR__UNKNOWN_TOPIC:
            case RdKafka::ERR__UNKNOWN_PARTITION:
                std::cerr << "Consume failed: " << message->errstr() << std::endl;
                run = false;
                break;

            default:
                /* Errors */
                std::cerr << "Consume failed: " << message->errstr() << std::endl;
                run = false;
        }
    }

public:
    void start_consume(std::string group_id, std::string brokers, std::string topic) {

        topics.push_back(topic);

        /*
         * Create configuration objects
         */
        RdKafka::Conf *conf = RdKafka::Conf::create(RdKafka::Conf::CONF_GLOBAL);
        RdKafka::Conf *tconf = RdKafka::Conf::create(RdKafka::Conf::CONF_TOPIC);

        ExampleRebalanceCb ex_rebalance_cb;
        conf->set("rebalance_cb", &ex_rebalance_cb, errstr);

        conf->set("enable.partition.eof", "true", errstr);

        if (conf->set("group.id", group_id, errstr) != RdKafka::Conf::CONF_OK) {
            std::cerr << errstr << std::endl;
        }

        conf->set("metadata.broker.list", brokers, errstr);
        exit_eof = true;





        /*
         * Set configuration properties
         */




        ExampleEventCb ex_event_cb;
        conf->set("event_cb", &ex_event_cb, errstr);

        tconf->set("auto.offset.reset", "beginning", errstr);

        conf->set("default_topic_conf", tconf, errstr);
        delete tconf;

        signal(SIGINT, sigterm);
        signal(SIGTERM, sigterm);


        /*
         * Consumer mode
         */

        /*
         * Create consumer using accumulated global configuration.
         */
        RdKafka::KafkaConsumer *consumer = RdKafka::KafkaConsumer::create(conf, errstr);
        if (!consumer) {
            std::cerr << "Failed to create consumer: " << errstr << std::endl;
            exit(1);
        }

        delete conf;

        std::cout << "% Created consumer " << consumer->name() << std::endl;


        /*
         * Subscribe to topics
         */
        RdKafka::ErrorCode err = consumer->subscribe(topics);
        if (err) {
            std::cerr << "Failed to subscribe to " << topics.size() << " topics: "
                      << RdKafka::err2str(err) << std::endl;
            exit(1);
        }

        /*
         * Consume messages
         */
        while (run) {
            RdKafka::Message *msg = consumer->consume(1000);
            msg_consume(msg, NULL);
            delete msg;
        }


        /*
         * Stop consumer
         */
        consumer->close();
        delete consumer;

        std::cerr << "% Consumed " << msg_cnt << " messages ("
                  << msg_bytes << " bytes)" << std::endl;


        RdKafka::wait_destroyed(5000);

    }


};


int main(int argc, char **argv) {
    Consumer consumer;
    consumer.start_consume("test4", "localhost:9092", "test");


}
