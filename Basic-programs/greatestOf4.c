/* Take 4 real numbers as input and find greatest use different methodds. */

#include<stdio.h>

float greatestByTernary(float num1, float num2, float num3, float num4){
    return (num1 > num2 ? (num1 > num3 ? (num1 > num4 ? num1 : num4) : (num3 > num4 ? num3 : num4)) : (num2 > num3 ? (num2 > num4 ? num2 : num4) : (num3 > num4 ? num3 : num4)));
}

int main(int argc, char const *argv[])
{
    
    float n1,n2,n3,n4;
    printf("Enter four real numbers : ");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    printf("Gretest among these is %.3f\n", greatestByTernary(n1,n2,n3,n4));
    return 0;
}
