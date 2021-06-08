#include<stdio.h>
void swap2(int*,int*);
int main()
{
    int int1,int2;
    printf("Enter two integers : \n");
    scanf("%d%d",&int1,&int2);
    swap2(&int1,&int2);
    printf("Num1 = %d & Num2 = %d\n",int1,int2);
    return 0;
}
void swap2(int *x,int *y)
{
    //Swapping two integers without using 3rd variable
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}