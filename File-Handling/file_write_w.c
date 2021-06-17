// Write a program to write "Hello! students" in the file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("msg.txt","w");
    if(fp==NULL)
    {
        printf("File not opened.\n");
        exit(1);
    }
    char msg[]="Hello! Guys, how do you doing.";
    for(int i=0;i<strlen(msg);i++)
        fputc(msg[i],fp);
    fclose(fp);
    return 0;
}