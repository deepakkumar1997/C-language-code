/* Input a number and check wheather it is negative, positive and zero. try different methods.*/

#include<stdio.h>
#include<stdlib.h>

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

enum stateOfNum findNegPosZero(long int n){
    return n >0 ? (positive) : (n != 0 ? negative : zero);
}

void conditionalFind(long int n){
    n < 0 ? (printf("%ld is a -ve number\n",n)) : (n == 0 ? printf("%ld looks like Zero\n",n) : printf("%ld is a +ve number\n",n));
}

void posNeg(long int n){
    if(n==0)
    printf("%ld it seems zero!\n",n);
    else if(n!=abs(n))
        printf("%ld is a -ve num\n",n);
    else
        printf("%ld is a +ve num\n",n);
    /* We can calculate pos neg by one more method like is n + abs(n) == 0 then it is negative
       otherwise positive */
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
    if(findNegPosZero(n)==1)
    printf("%ld is a positive number.\n",n);
    else if(findNegPosZero(n)==-1)
    printf("%ld is a negative number.\n",n);
    else
    printf("%ld Oh! this is looking like zero or Big O~lol\n",n);
    conditionalFind(n);
    posNeg(n);
    return 0;
}
