//Writing in a file  using fprintf()
//fprintf() function is used to write formatted output to the specified stream
//Syntax : int fprintf(FILE *pointer, const char *format [, argument,.....]);

//Write a program to write content to a file. Use fprintf() to write content to the file.

#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fp;
    fp = fopen("records.txt","a");
    if(fp==NULL){
        printf("Error! File not opened!");
        exit(1);
    }

    int a,b;
    printf("Enter first integer : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    fprintf(fp,"Sum of %d and %d is %d\n",a,b,a+b);
    fclose(fp);
    return 0;
}