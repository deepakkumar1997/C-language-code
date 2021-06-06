#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;q=&b;
    //Here I will do some calculations with address of a & b and store value in var a through 
    // address of var b and in var b through address of var a
    *(p+1)=100;//through this I'm storing 100 to var b
    *(q-1)=200;//through this stroring 200 to var a
    printf("Value of a : %d, & b : %d\n",a,b); 
    return 0;
}