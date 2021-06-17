#include<stdio.h>
#define SUM(num1,num2) num1+num2
#define sum(a,b) (a)+(b)
#define MULTIPLY(a,b) a*b
#define multiply(a,b) (a)*(b)
#define pf printf
#define sf scanf


int main(){
    int a,b;
    pf("Enter value of a : ");
    sf("%d",&a);
    pf("Enter value of b : ");
    sf("%d",&b);
    pf("Sum of a+a*3 + b : %d\n",SUM(a+a*3,b));
    pf("Sum of ((a+a)*3) + b) : %d\n",SUM((a+a)*3,b));
    pf("Sum of (a+b) + (b+2*a) : %d\n",sum(a+b,b+2*a));
    pf("Multiplication of a+2 * b-2 : %d\n",MULTIPLY(a+2,b-2));
    pf("Multiplication of (a+2) * (b-2) : %d\n",multiply(a+2,b-2));
    pf("Multiplication of (a/2+5) * (b*2) : %d\n",multiply(a/2+5,b*2));
    return 0;
}

