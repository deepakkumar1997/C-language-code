/* Input a number and check wheather it is negative, positive and zero. */

#include<stdio.h>

enum stateOfNum{
    negative=-1, zero, positive
};

enum stateOfNum negPosZero(long int n){
    if(n>0)
    return positive;
    else if(n<0)
    return negative;
    else
    return zero;
}

int main(int argc, char const *argv[])
{
    
    long int n;
    printf("Enter a number to check it state : ");
    scanf("%ld",&n);
    if(negPosZero(n)==1)
    printf("%ld is a positive number.\n",n);
    else if(negPosZero(n)==-1)
    printf("%ld is a negative number.\n",n);
    else
    printf("%ld Oh! this is looking like zero or Big O~lol\n",n);
    return 0;
}
