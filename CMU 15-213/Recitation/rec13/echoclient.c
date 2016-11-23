/*
 * echoclient.c - An echo client
 */

#include "csapp.h"

int main(int argc, char **argv) 
{
    int clientfd;
    char *host, *port, buf[MAXLINE];
    rio_t rio;

    if (argc != 3) {
       fprintf(stderr, "usage: %s <host> <port>\n", argv[0]);
       exit(0);
    }
    host = argv[1]; 
    port = argv[2];

    clientfd = Open_clientfd(host, port); /* Open socket connection to server */
    Rio_readinitb(&rio, clientfd); /* Initialize RIO read structure */

    while (Fgets(buf, MAXLINE, stdin) != NULL) {
       Rio_writen(clientfd, buf, strlen(buf)); /* Write message to server */
       Rio_readlineb(&rio, buf, MAXLINE); /* Read back response up to MAXLINE chars */
       printf("%s\n", buf); /* Print response from server */ 
    }
    Close(clientfd); /* Close the socket connection when done */
    exit(0);
}
