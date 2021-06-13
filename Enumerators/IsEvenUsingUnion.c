#include<stdio.h>

enum bool { false, true };

enum bool IsEven(int num)
{
    if(num%2)
    return false;
    else
    return true;
}

int main()
{
    int n;
    printf("Enter an integer to check odd even : ");
    scanf("%d",&n);
    enum bool res = IsEven(n);
    if(res)
    printf("-> It is an even number.\n");
    else
    printf("-> It is an odd number.\n");
    return 0;
}