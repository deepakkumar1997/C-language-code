#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
    printf("Address of var a : %d, & var b : %d\n",&a,&b);
    printf("Subtraction of address of var (b-a) : %d\n",q-p);
    *(p+1)=786;
    printf("Storing data through address in var b : %d\n",b);
    return 0;
}