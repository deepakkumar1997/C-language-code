#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter two numbers to swap : \n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swapping a = %d & b = %d\n",a,b);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}