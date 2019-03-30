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

#ifndef TCP_LLVMSP_SERVER_H
#define TCP_LLVMSP_SERVER_H


class Server {

private:

    std::string IP_ADDR;
    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    bool run = true;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};


public:
    void tcp_listen(int PORT, std::string ip_address);

};


#endif //TCP_LLVMSP_SERVER_H
