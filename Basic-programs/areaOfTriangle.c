/* Input height and base and calculate area of triangle. */

#include<stdio.h>

double areaOfTriangle(float height, float base){
    return height*base*(0.5);
}

int main(int argc, char const *argv[])
{
    
    float h,b;
    printf("Enter height : ");
    scanf("%f",&h);
    printf("Enter  base  : ");
    scanf("%f",&b);
    printf("Area of Triangle is %.2lf with height %.2f and base %.2f\n",areaOfTriangle(h,b),h,b);
    return 0;
}
