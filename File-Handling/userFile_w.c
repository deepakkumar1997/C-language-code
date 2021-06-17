//Write a program to take string from user and write it into a file.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("user_msg.dat","w");
    char msg[100];
    if(fp==NULL){
        printf("File not opened!");
        exit(1);
    }
    printf("Enter a message and it is going to store in a file : ");
    fgets(msg, sizeof msg, stdin );
    for(int i=0; i<strlen(msg); i++)
        fputc(msg[i],fp);
    getc(stdin);
    fclose(fp);
    return 0;
}