/* take three number and find greatest use different methods. */

#include<stdio.h>

float greatestOf3(float num1, float num2, float num3){
    
    return (num1 >= num2 ? (num1 >= num3 ? num1 : num3) : (num2 >= num3 ? num2 : num3));
}

float greatestByIf(float num1, float num2, float num3){
    
    if(num1 >= num2 && num1 >= num3)
    return num1;
    
    if(num2 >= num1 && num2 >= num3)
    return num2;
    
    if((num3 >= num1) && (num3 >= num2))
    return num3;
}

float greatestByLadderIf(float num1, float num2, float num3){
    
    if(num1 >= num2)
        if(num1 >= num3)
            return num1;
    
    if(num2 >= num1)
        if(num2 >= num3)
            return num2;
    
    if(num3 >= num1)
        if(num3 >= num2)
            return num3;
}

float greatestByIfElse(float num1, float num2, float num3){

    if(num1 >= num2 && num1 >= num3)
        return num1;
    
    else if(num2 >= num1 && num2 >= num3)
        return num2;
    
    else return num3;
}

float greatestByLadderIfElse(float num1, float num2, float num3){

    if(num1 >= num2){
        if(num1 >= num3)
            return num1;
        else return num3;
    }
    else if(num2 >= num1){
        if(num2 >= num3)
            return num2;
        else return num3;
    }
}

int main(int argc, char const *argv[])
{
    
    float a,b,c;
    printf("Enter three numbers : ");
    scanf("%f%f%f",&a,&b,&c);
    printf("Grestest = %.3f\n",greatestOf3(a,b,c));
    printf("Grestest = %.3f\n",greatestByIf(a,b,c));
    printf("Grestest = %.3f\n",greatestByIfElse(a,b,c));
    printf("Grestest = %.3f\n",greatestByLadderIf(a,b,c));
    printf("Grestest = %.3f\n",greatestByLadderIfElse(a,b,c));
    return 0;
}
