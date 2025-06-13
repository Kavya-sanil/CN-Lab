#include<stdio.h>
#include<string.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<netdb.h>

int main(int argc,char *argv[])
{
    struct sockaddr_in server,client;
    if(argc!=3)
    printf("\nInvalid input format");

            int sockfd=socket(AF_INET,SOCK_DGRAM,0);
             if(sockfd!=-1);
             printf("\n Error in socket");

                server.sin_family=AF_INET;
                server.sin_addr.s_addr=INADDR_ANY;
                server.sin_port=htons(atoi(argv[2]));

    char buffer[100];
        printf("Enter the message to be send to the server :");
        fgets(buffer,100,stdin)

                if(sendto(sockfd,buffer,sizeof(buffer),0,(struct sockaddr*)&server,sizeof(server))<0)
                if(sendto(sockfd,buffer,sizeof(buffer),0,(struct sockaddr*)&server,sizeof(server))<0)
                printf("Message not send")
}