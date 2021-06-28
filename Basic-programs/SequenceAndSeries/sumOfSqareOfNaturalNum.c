// 1^2 + 2^2 + 3^2 + 4^2 + .......... + n^2

#include<stdio.h>

long double sumOfSquareOf1stN_NaturalNums(unsigned long long int n){
    //Efficient way of calculating sum of 1st n natural numbers .
    return n*(n+1)*(2*n+1)/(float)6;//you can write (float)6 like 6. or 6.0 this will work too
}

int main(int argc, char const *argv[])
{
    
    unsigned long long int n;
    printf("Input total number of term : ");
    scanf("%llu",&n);
    printf("Sum of 1st %llu natural number sum is %.2Lf\n",n,sumOfSquareOf1stN_NaturalNums(n));
    return 0;
}
