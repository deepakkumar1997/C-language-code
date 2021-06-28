// 1/x + 2/x + 3/x + 4/x + ......... + n/x

#include<stdio.h>

double sumOfSeries1uponx(long long int n, int x){
    // This is regular way(hard code) of summing a series through loop which takes lot of memory
    double sum=0;
    for(int i=1; i<=n; i++)
        sum+=i/(float)x;
    return sum;
}

double sumOfSeries1uponXEfficientWay(long long int n, int x){
    // This is(using formula for sum) efficient way of calculating sum of series 
    // Here I'll using formula for sum of 1st n-natural number and doing upon X on that formula
    return (n*(n+1))/(2.*x);
}

int main(int argc, char const *argv[])
{
    
    int x,c=0;
    long long int n;
    RepeatOnce:
    printf("Input value of n : ");
    scanf("%lld",&n);
    printf("Input value of x ; ");
    scanf("%d",&x);
    printf("Efficient way of doing sum of series result : %.2lf\n",sumOfSeries1uponXEfficientWay(n,x));
    printf("Sum of of the series 1/%d + 2/%d +,,,+ %lld/%d is %.2lf\n",x,x,n,x,sumOfSeries1uponx(n,x));
    printf("If you want to see that why 1st function is efficient then enter value of n more than '10 to the power 8'\nAnd see the difference.\n");
    if(c++<1)
        goto RepeatOnce;
    return 0;
}