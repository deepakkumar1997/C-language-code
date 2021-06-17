#include<stdio.h>
#define ACTION(a,b) a##b+a*b
#define concat(a,b) a+b##a*b

int main(){
    printf("##~it concatenate what before it and what after it.\n");
    printf("So 5##2+5*2 = %d\n",ACTION(5,2));
    //it will calcuate like this
    //## will concatenate or append what is just before it what just after
    //means 5##2 = 52 and 5*2 = 10 
    //now 52+10 = 62~(result)
    printf("5+2##5*2 : -> %d\n",concat(5,2));
    //it will calculate like first it will calculate ## part
    //so 2##5 = 25 and then 25*2 = 50 
    //and now 5 + 50 = 55~is the result
    return 0;
}