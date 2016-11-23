/* 
 * echoserver.c - An iterative echo server 
 */ 

#include "csapp.h"

void echo(int connfd);

int main(int argc, char **argv) 
{
    int listenfd, connfd;
    socklen_t clientlen;
    struct sockaddr_in clientaddr;
    char *port;

    if (argc != 2) {
       fprintf(stderr, "usage: %s <port>\n", argv[0]);
       exit(0);
    }
    port = argv[1];

    listenfd = Open_listenfd(port); /* Server listens on a specific port number */
    while (1) {
       clientlen = sizeof(clientaddr);
       /* Accept call will block until a client connects to the port */
       connfd = Accept(listenfd, (SA *)&clientaddr, &clientlen); 
       /* Connection is established, echo to client */
       echo(connfd);
       Close(connfd); /* Close the socket connection */
    }
    exit(0);
}


void echo(int connfd) 
{
    size_t n; 
    char buf[MAXLINE]; 
    rio_t rio;

    Rio_readinitb(&rio, connfd); /* Initialize RIO read structure */
    /* Read line by line from client & echo back 
       NOTE: Rio_readlineb returns the number of bytes read */
    while((n = Rio_readlineb(&rio, buf, MAXLINE)) != 0) {
        printf("server received %d bytes\n", (int)n);
        Rio_writen(connfd, buf, n); /* Write message back to client */
    }
}

