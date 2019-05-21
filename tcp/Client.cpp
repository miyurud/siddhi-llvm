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



#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "Client.h"
#include <iostream>


int Client::tcp_connect(int PORT, std::string ip_address)
{


    struct sockaddr_in serv_addr;
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Socket creation error \n");
        return -1;
    }

    memset(&serv_addr, '0', sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if(inet_pton(AF_INET, ip_address.c_str(), &serv_addr.sin_addr)<=0)
    {
        printf("\nInvalid address/ Address not supported \n");
        return -1;
    }
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        printf("\nConnection Failed \n");
        return -1;
    }

    return sock;

}



void Client::tcp_send( int sock, std::string message) {

    if(sock >0) {
            send(sock, message.c_str(), strlen(message.c_str()), 0);
    }
    else{
        printf("Socket is not successfully connected");
    }

}

int main(){
    Client client;
    int sock  = client.tcp_connect(8080, "127.0.0.1");
   /* client.tcp_send( sock, "This message is successfully sent by a client ");
    client.tcp_send( sock, "This message 2 ");*/
   while (1){
       std::string x;
       std::cin >> x;
       client.tcp_send(sock,x);

   }
   client.tcp_send(sock,"Key=Value");
   client.tcp_send(sock,"weight=1");
   client.tcp_send(sock,"weightt=1001");


}
