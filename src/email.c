#define _CRT_SECURE_NO_DEPRECATE
#include <winsock.h>
#include <stdio.h>
#pragma comment(lib,"ws2_32.lib")

void SendAndReceive(SOCKET to_server_socket, char * messagesend)
{
    char bufreceive[1024];
    int size,retVal,nbrecv;
    printf("Envoye : %s\n",messagesend);
    size  = (int)strlen( messagesend );
    retVal = send( to_server_socket, messagesend, size, 0 );
    memset(bufreceive,0,1024);
    while(!bufreceive[0])
    {
        nbrecv = recv( to_server_socket, bufreceive, 1024, 0 );
    }
    printf("Recu : %s\n",bufreceive);
}

SOCKET connexion(char* server_name,unsigned short port)
{
    char buf[ 1024 ] ={0};
    int nbrecv;
    struct sockaddr_in   serverSockAddr;    // addresse de la socket
    struct hostent     * serverHostEnt;     // description du host serveur
    SOCKET to_server_socket = 0;
    memset(&serverSockAddr,0, sizeof( serverSockAddr ) );
    serverHostEnt = gethostbyname( server_name );
    if ( serverHostEnt == NULL )
        return (SOCKET)-1;
    memcpy(&serverSockAddr.sin_addr,serverHostEnt->h_addr, serverHostEnt->h_length );
    serverSockAddr.sin_port = htons( port );         // host to network port
    serverSockAddr.sin_family = AF_INET;             // AF_*** : INET=internet
// creation de la socket
    to_server_socket = socket( AF_INET, SOCK_STREAM, 0 );
    if ( to_server_socket < 0)
        return (SOCKET)-2;
// requete de connexion
    if( connect( to_server_socket, ( struct sockaddr * ) &serverSockAddr,sizeof( serverSockAddr ) ) < 0 )
        return (SOCKET)-3;
    while( !buf[0] )
        nbrecv = recv( to_server_socket, buf, 1024, 0 );
    printf("Welcome message : %s\n",buf);
    return to_server_socket;
}

int mail_simple(SOCKET sock,const char* from,const char* to,const char* body)
{
#define SIZEMAX 1000000
    char buffer[SIZEMAX];
    SendAndReceive(sock, "EHLO dude.fr\r\n");
    sprintf(buffer,"MAIL FROM: <%s>\r\n",from);
    SendAndReceive(sock, buffer);
    sprintf(buffer,"RCPT TO: <%s>\r\n",to);
    SendAndReceive(sock, buffer);
    SendAndReceive(sock, "DATA\r\n");
    sprintf(buffer, "Subject: %s",body);
    SendAndReceive(sock, buffer);
    SendAndReceive(sock,  "QUIT\r\n");
    return 0;
}


#define SMTP_SERVER "smtp._____.com"
#define SMTP_PORT 25
#define FROM "truc@machine.fr"
#define TO "dude@truc.com"
#define BODY "Bonjour !\r\nUn petit mail de test ! Je teste juste un truc !\r\nSuperFred\r\n.\r\n"

int main()
{
    SOCKET sock;
    WSADATA wsaData;
    WSAStartup( 0x0101, &wsaData );
    sock = connexion(SMTP_SERVER,SMTP_PORT);
    if (sock<0)
    {
        printf("Echec code : %d\n",(int)sock);
        return (int)sock;
    }
    mail_simple(sock,FROM,TO,BODY);
    shutdown( sock, 2 );
    return( closesocket( sock ) );
}
