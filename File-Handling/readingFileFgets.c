//Write a program to read content from a file and display on the screen use fgets() to read
//string from a file

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){   
    FILE *fp;
    fp = fopen("msg.txt","r");

    if(fp==NULL){
        printf("Error 404! file not found!");
        exit(1);
    }

    char str[10];
    while(fgets(str,sizeof str,fp)!=NULL){
        fputs(str,stdout);
        printf(" %s\n",str);
    }
    fclose(fp);
    return 0;
}