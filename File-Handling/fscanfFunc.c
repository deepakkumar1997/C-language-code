//Reading from file using fscanf()
//fscanf() function is used to read formatted content from file
//Syntax : int fscanf(FILE *pointer, const char *format.....);
/* fscanf() reads the data from the stream and stores them according to the parameter format
   into the location pointer by the additional arguments. */

//Write a program to read content from a file and display on the screen using fscanf() function.

#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fp;
    fp = fopen("records.txt","r");
    if(fp==NULL){
        printf("Error 404! File not found!");
        exit(1);
    }

    int a,b,c;
    while(!feof(fp)){
        fscanf(fp, "%d,%d,%d",&a,&b,&c);
        printf("Sum of %d and %d is %d\n",a,b,c);
    }
    fclose(fp);
    return 0;
}