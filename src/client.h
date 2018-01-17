#ifndef CLIENT_H
#define CLIENT_H





#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h> /* close */
#include <netdb.h> /* gethostbyname */
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1
#define closesocket(s) close(s)
typedef int SOCKET;
typedef int WSADATA;

typedef struct sockaddr_in SOCKADDR_IN;
typedef struct sockaddr SOCKADDR;
typedef struct in_addr IN_ADDR;






#define CRLF	 "\r\n"
#define PORT	 1977

#define BUF_SIZE 1024

int mail_simple(SOCKET sock,const char* from,const char* to,const char* body);
SOCKET connexion(char* server_name,unsigned short port);
void SendAndReceive(SOCKET to_server_socket, char * messagesend);
int main (int argc, char *argv[]);



#endif 
