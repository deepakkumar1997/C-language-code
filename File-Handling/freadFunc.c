//Reading from a file using fread().
//fread() function is used to read content from file in binary mode.
//syntax : int fread(void *buffer, int size, int count, FILE *ptr);

//Write a program to read content from a file using fread() and display on the screen.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int bookid;
    char title[50];
    float price;
}BOOK;

int main(){

    FILE *fp;
    fp = fopen("Clang.dat","rb");
    if(fp==NULL){
        printf("Error 404! file not found!");
        exit(1);
    }

    BOOK b;
    //int freadReturn = fread(&b, sizeof b, 1, fp);
    while(fread(&b, sizeof b, 1, fp)!=0){
        //printf("fread() returning : %d\n",freadReturn);
        printf("Bookid : %d, Book Title : %s, Book Price : %.2f\n",b.bookid,b.title,b.price);
    }
    //printf("\nNow, fread() is returning %d\n",freadReturn);
    fclose(fp);
    return 0;
}