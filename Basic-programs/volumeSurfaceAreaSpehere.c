/* Input radius and calculate volume and surface area of sphere. */

#include<stdio.h>
#define PI 3.141

double volumeOfSphere(float r){
    return (PI*r*r*r)/3;
}

double surfaceAreaOfSphere(float r){
    return 4*PI*r*r;
}

int main(int argc, char const *argv[])
{
    
    float r;
    printf("Enter radius : ");
    scanf("%f",&r);
    printf("Volume of Sphere : %.2lf\n",volumeOfSphere(r));
    printf("Surface area of Sphere : %.2lf\n",surfaceAreaOfSphere(r));
    return 0;
}
