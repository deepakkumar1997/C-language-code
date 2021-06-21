#include<stdio.h>

typedef struct 
{
    unsigned int d;
    unsigned int m;
    unsigned int y;
}DATE1;

typedef struct
{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y;
}DATE2;

typedef struct 
{
    unsigned int d:5;
    unsigned int m:4;
    unsigned int y:12;
}DATE3;

int main(){

    DATE1 d1 = {21,6,2021};
    DATE2 d2 = {21,6,2021};
    DATE3 d3 = {21,6,2021};
    printf("Sizeof(d1) = %lu Bytes\nSizeof(d2) =  %lu Bytes\nSizeof(d3) =  %lu Bytes\n",sizeof(d1),sizeof(d2),sizeof(d3));
    printf("\nDATE : %d/0%d/%d\n",d1.d,d2.m,d3.y);
    return 0;
}
