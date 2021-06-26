/* Input price of a shirt and calculate discount if price is greater then 1000 then discount
   will be 40% otherwise 30%. */

#include<stdio.h>

void discount(double price){
    if(price>=1000){
        printf("You've got %.2lf rupees of discount your final price of shirt is %.2lf\n",price*40/100,price-price*40/100);
    }
    else
    printf("You've got %.2lf rupees of discount your final price of shirt is %.2lf\n",price*30/100,price-price*30/100);
}

int main(int argc, char const *argv[])
{
    
    double price;
    printf("Enter price of your shirt : ");
    scanf("%lf",&price);
    discount(price);
    return 0;
}
