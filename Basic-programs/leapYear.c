/* Input year and find wheather it is leap year or not. 
   
   Leap Year Format : 
                     If a year is divisible by 100 and also divisible by 400 then it is leap
   year other wise not a leap year. If a year is not divisible by 100 but divisible by 4 then
   it is a leap year otherwise not a leap year. */

#include<stdio.h>

typedef enum boolean{
    false, true
}bool;

bool leapYear(int year){
    if(year%100==0 && year%400 ==0)
        return true;
    else if(year%100!=0 && year%4==0)
        return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    /* code */
    int year;
    printf("Input year to find it is leap or not : ");
    scanf("%d",&year);
    
    if(leapYear(year)) printf("%d is a leap year.\n",year);

    else printf("%d is not a leap year.\n",year);

    return 0;
}
