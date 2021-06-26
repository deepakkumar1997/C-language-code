/* Input a number and print it even or odd. */

#include<stdio.h>

typedef enum{
    false, true
}bool;

bool evenOdd(int num){
    if(num%2)
    return false;
    else
    return true;
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Enter an integer to check even or odd : ");
    scanf("%d",&n);
    if(evenOdd(n))
    printf("%d is an even number\n",n);
    else
    printf("%d is an odd number\n",n);
    return 0;
}
