#include<stdio.h>
struct date
{
    int d,m,y;
}d1;
struct date d2;
int main()
{
    //Intializing value like array
    struct date today={20,6,2021},d3,d4;
    //Initializing value after declaration
    d1.d = 21;
    d1.m = 6;
    d1.y = 2021;
    //Now copying data of d1 to d2 method~1
    d2.d = d1.d;
    d2.m = d1.m;
    d2.y = d1.y;
    //Now copying data from d2 to d3 directly ~~ nethod~2
    d3=d2;
    //now storing data through user input
    printf("Enter your DOB in format DD/MM/YYYY : ");
    scanf("%d/%d/%d",&d4.d,&d4.m,&d4.y);
    printf("Your DOB is %d/%d/%d\n",d4.d,d4.m,d4.y);
    printf("Today's date is %d/%d/%d\n",today.d,today.m,today.y);
    printf("Tommorrow's date is %d/%d/%d\n",d1.d,d1.m,d1.y);
    printf("D2~Tommorrow's date is %d/%d/%d\n",d2.d,d2.m,d2.y);
    printf("D3~Tommorrow's date is %d/%d/%d\n",d3.d,d3.m,d3.y);
    return 0;
}