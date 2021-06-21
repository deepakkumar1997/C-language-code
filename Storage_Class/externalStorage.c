/* ***************************** External Storage Class ************************************
   keyword : extern , e.g.-> extern int x=5;
   It has same properties as static storage class have except it has global scope means that
   variable created with external storage class can be used anywhere in whole program. 
   extern is not an declaration keyword it is a reference. 
   Mainly extern keyword is used when an global variable is declared below to any function.*/

#include<stdio.h>

void func();

int main(){

    extern int x;// use extern keyword to access global var x which is declared below the main function
    printf("x = %d\n",x);
    func();
    printf("x = %d\n",x);
    return 0;
}
int x=5;
void func(){
    x++;
    printf("func()-> x = %d\n",x);
    return;
}