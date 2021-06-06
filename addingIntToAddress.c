#include<stdio.h>
int main()
{
    int a,*p;
    p=&a;
    printf("Address of a : %d\n",p);
    printf("Adding int-5 to address of a : a+5 = %d\n",p+5);
    return 0;
}