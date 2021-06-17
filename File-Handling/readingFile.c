#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("user_msg.dat","r");
    if(fp==NULL)
    {
        printf("Error 404! File not found!");
        exit(1);
    }
    char ch=fgetc(fp);
    while(!feof(fp)){
        fputc(ch,stdout);
        ch=fgetc(fp);
    }
    fclose(fp);
    return 0;
}