#include<stdio.h>
#include<string.h>
#define pi 3.141

int main()
{
    typedef int radius;
    radius r;
    printf("Enter radius of circle : ");
    scanf("%d",&r);
    typedef float real;
    real area = pi*r*r;
    printf("Area of circle : %.2f\n",area);
    return 0;
}