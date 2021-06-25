/* Input principle amount, time, rate and calculate simple interest. */

#include<stdio.h>

double simpleInterest(float p_amount, float time, float rate){
    return p_amount*rate*time/100;
}

float timeInYear(){

    int how_year, how_month;
    printf("How much year : ");
    scanf("%d",&how_year);
    printf("How much month : ");
    scanf("%d",&how_month);
    return (float)(how_year + how_month/12.0);
}

int main(int argc, char const *argv[])
{
    
    float time,rate,pamount;
    printf("Enter printciple amount : ");
    scanf("%f",&pamount);
    printf("Enter percentage of rate : ");
    scanf("%f",&rate);
    time = timeInYear();
    printf("Simple Interest = %.3lf rupees\n",simpleInterest(pamount, time, rate));
    return 0;
}
