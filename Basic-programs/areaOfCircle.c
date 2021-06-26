/* Input radius and calculate area of triangle. */

#include<stdio.h>
#define PI 3.141
#include<math.h>

double area(double r){
    return PI*pow(r,2);
}

double input(){
    double r;
    printf("Enter radius : ");
    scanf("%lf",&r);
    return r;
}

int main(int argc, char const *argv[])
{
    
    printf("Area of triangle is %.2f\n",area(input()));
    return 0;
}
