#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h> 
#include <sys/socket.h> 
#include <netinet/in.h>
int main(int argc, char *argv[])
{
int server_fd, new_socket;
struct sockaddr_in address;
server_fd = socket(AF_INET, SOCK_STREAM, 0);
if (server_fd<0)
 printf("Error"); 
else
 printf("socket created successfully");
}
