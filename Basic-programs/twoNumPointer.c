/* Input two numbers if first number is greater than calculate subtraction otherwise addition.*/

#include<stdio.h>

void pointersPlay(int *num1, int *num2){
    if(*num1 > *num2){
        printf("Subtraction of %d - %d is %d\n",*num1,*num2,*num1-*num2);
    }
    else{
        printf("Addition of %d + %d is %d\n",*num1,*num2,*num1+*num2);
    }
    // add and subtract using pointer
    if(*num1 > *num2){
        printf("Addition of %d + %d is %d\n",*num1,*num2,*num1+*num2);
    }
    else
    printf("Subtraction of %d - %d is %d\n",*num1,*num2,*num1-*num2);
}

int main(int argc, char const *argv[])
{
    
    int n1, n2;
    //int* ptr1=&n1, ptr2 = &n2;
    printf("Enter two integers : ");
    scanf("%d%d",&n1,&n2);
    pointersPlay(&n1,&n2);
    return 0;
}
