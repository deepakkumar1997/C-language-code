#include<stdio.h>
int main()
{
    int a,*p;
    p=&a;
    printf("Address of a : %d\n",p);
    //I'm adding 5 to address of var a but in address of 5*4=20 will be added because in this
    // gcc compiler Integer data are of 4 bytes so why it is 5*4=20(bytes)
    printf("Adding int-5 to address of a : a+5 = %d\n",p+5);
    return 0;
}