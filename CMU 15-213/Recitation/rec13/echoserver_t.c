/* 
 * echoserver.c - An iterative, threaded echo server 
 *   Integrates the code from lecture 23
 */ 

#include "csapp.h"

void* echo(void*);

int main(int argc, char **argv) 
{
    int listenfd, *connfd;
    socklen_t clientlen;
    struct sockaddr_in clientaddr;
    char *port;
    pthread_t tid;

    if (argc != 2) {
       fprintf(stderr, "usage: %s <port>\n", argv[0]);
       exit(0);
    }
    port = argv[1];

    listenfd = Open_listenfd(port); /* Server listens on a specific port number */
    while (1) {
       clientlen = sizeof(clientaddr);
       connfd = Malloc(sizeof(int));
       /* Accept call will block until a client connects to the port */
       *connfd = Accept(listenfd, (SA *)&clientaddr, &clientlen); 
       /* Connection is established, echo to client */
       Pthread_create(&tid, NULL, echo, connfd);
    }
    exit(0);
}


void* echo(void* vargp) 
{
    size_t n; 
    char buf[MAXLINE]; 
    rio_t rio;
    int connfd = *((int *)vargp);
    Pthread_detach(pthread_self()); 
    Free(vargp);                    
    
    Rio_readinitb(&rio, connfd); /* Initialize RIO read structure */
    /* Read line by line from client & echo back 
       NOTE: Rio_readlineb returns the number of bytes read */
    while((n = Rio_readlineb(&rio, buf, MAXLINE)) != 0) {
        printf("server received %d bytes\n", (int)n);
        Rio_writen(connfd, buf, n); /* Write message back to client */
    }
    
    Close(connfd);
    
    return NULL;
}

