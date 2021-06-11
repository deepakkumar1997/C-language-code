#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *p;// It is an exaple of Static Memory Allocation(SMA)
    //Using malloc() function we can create one memory block it is dynamic
    p=(float*)malloc(6);//malloc() is an example Dynamic Memory Allocation(DMA)
    printf("Enter a real number : ");
    scanf("%f",p);
    *(p+1)=546.567;
    printf("Stored number throug \"malloc()\" function : %.2f\n",*p);
    printf("Address of 0th block is %u\n",p);
    printf("Address of 1st block is %u\n",p+1);
    printf("Value at 1st block is %f\n",*(p+1));
    //Always remember to free value of malloc(), calloc() and realloc()
    free(p);
    return 0;
}