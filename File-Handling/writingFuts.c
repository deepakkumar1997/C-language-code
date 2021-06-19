//Write a program to write a string to a file. Use fputs() to write content to the file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *fp;
    fp = fopen("data.txt","a");

    if(fp==NULL){
        printf("Error! File not opened!");
        exit(1);
    }

    char str[50];
    fgets(str, sizeof str, stdin);
    fputs(str,fp);
    fclose(fp);
    return 0;
}