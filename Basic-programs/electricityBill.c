/* Input value for electricity unit and claculate electricity bill according to 
        
        Unit <= 200 -> 500 rupees
        200 < Unit >= 500 -> 500 rupees for first 200 unit after that 6 rupees per unit
        otherwise 500rupees for 1st 200 unit + 6 rupees/per unit for 200 to 500 unit and rest
        8 rupees per unit.                                                              */

#include<stdio.h>

//function for calculating elecitricity bill
double electricityBill(int unit){

    if(unit <= 200)
        return 500;
    else if(unit <= 500)
        return 500 + 6*(unit - 200);
    else
        return 500 + 6*300 + 8*(unit -500);
}

int main(int argc, char const *argv[])
{
    
    int unit;
    printf("Enter your electricity unit : ");
    scanf("%d",&unit);
    printf("Your electricity bill is %.2lf rupees.\n",electricityBill(unit));
    return 0;
}
