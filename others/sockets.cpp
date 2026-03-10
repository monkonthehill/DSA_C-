
#include <arpa/inet.h>
#include <cstddef>
#include <cstring>
#include <iostream>
#include <netdb.h>
#include <netinet/in.h>
#include <string.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>

int main() {
  int bind(int sockfd, struct sockaddr *my_addr, int addrlen)
      /* socketfd is the file descripter that is returned by the socket function
    my adder is a pointer to struct socketaddr that contains information
    about your address , namely, port and IP address
    *addrlen is the length in
    bytes of that address.
    */
      return 0;
}
