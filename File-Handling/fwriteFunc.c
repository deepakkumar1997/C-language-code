//Writing in a file using fwrite()
//fwrite() function is used to write content to the file in binary mode.
//binary modes :-> rb,wb,ab,rb+,wb+,ab+
//Syntax : int fwrite(void *buffer, int size, int count, FILE *ptr)

//Write a program to write content to a file use fwrite() to write content to the file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define pf printf

struct book{
    int bookid;
    char title[50];
    float price;
};

int main(){

    FILE *fp;
    fp = fopen("Clang.dat","ab");
    if(fp==NULL){
        pf("Error! file not found!");
        exit(1);
    }

    struct book b;
    pf("Enter bookid : ");
    scanf("%d",&b.bookid);
    getchar();
    pf("Enter title of book : ");
    fgets(b.title, sizeof b.title, stdin );
    b.title[strcspn(b.title,"\n")]=0;
    //scanf("%[^\n]%*c",b.title);
    pf("Enter price of book : ");
    scanf("%f",&b.price);
    fwrite(&b,sizeof b, 1, fp);
    fclose(fp);
    return 0;
}