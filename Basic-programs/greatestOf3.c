/* take three number and find greatest use different methods. */

#include<stdio.h>

float greatestOf3(float num1, float num2, float num3){
    return (num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3));
}

float greatestByIf(float num1, float num2, float num3){

}

float greatestByLadderIf(float num1, float num2, float num3){
    
}

int main(int argc, char const *argv[])
{
    
    float a,b,c;
    printf("Enter three numbers : ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Grestest = %.3f\n",greatestOf3(a,b,c));
    return 0;
}
