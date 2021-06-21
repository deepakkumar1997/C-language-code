/* ********************************* STATIC STORAGE CLASS ***********************************
   keyword : static , e.g.-> static int a=6;
   It has same properties like automatic except by default it has initialized value 0(zero) and
   life of static variables are till the program end. */

#include<stdio.h>

void function(){
    int num1=0;
    static int num2=0;
    printf("num1 = %d and num2 = %d\n",num1++,num2++);
    // Here var num1 will get released from RAM after completaion of function but var num2 
    // will remain in RAM till program gets executed.
    return;
}

int main(){

    int i=5,j=i;
    while(i){
        printf("Function call %d -> ",j-i+1);
        function();
        --i;
    }
    /*It will not printng value by incrementing because when a program runs every function 
    gets a separate memory block and after completation of that function that memory block
    which is allocated to that function gets released so variable available in that function
    is also gets destroyed so we can make a variable static so it can't be destroyed after
    completation of a function or memory block because a static variable have a life till
    end of the program. */
    return 0;
}