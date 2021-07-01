// Take 2 numbers from user and find their hcf, gcd, hcm, gcf all are same.

#include<stdio.h>

int gcdOf2Num(int num1, int num2){
    int gcd=1;
    for(int i=1; i <= (num1 > num2 ? num1 : num2 ); ++i ){
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    return gcd;
}

int main(int argc, char const *argv[])
{
    
    int n1,n2;
    printf("Input 2 numbers to find GCD : ");
    scanf("%d%d",&n1,&n2);
    printf("GCD of %d and %d is %d\n",n1,n2,gcdOf2Num(n1,n2));
    return 0;
}
