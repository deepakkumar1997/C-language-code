// Let's play with pointer and array
/* Why we can't increment an array with the help of its name if its name contains the base 
   address of that array :-
                           It's because array is treated as a constant pointer in the function
   it is declared. There is a reason for it. Array variable is supposed to point to the first element
   of the array or first memory instance of the block of the contiguous memory locations in which
   it is stored. So, if we will have the liberty to to change(increment or decrement ) the
   array pointer, it won't point to the first memory location of the block. Thus it will loose
   it's purpose.        */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int marks[] = {23, 21, 29, 40, 32};
    printf("%u\n",&marks);// marks = &marks are the same when it comes to array both holds the
    // Base address of array.
    printf("%p\n",marks);// By default a address value is of type hexadecimal and we can use 
    // format specifier %p to print these addresses in hex value. similarly %d in decimal.
    printf("%d\n",*marks);// As we all that name of array works as pointer and holds the address
    // of base elsement then why we can use derefrencing operator to print value of base element
    printf("%d",*(marks+1));// We can't increment value of marks because marks = &marks ;
    //It means that marks have base address of the array-'marks[]' if we increment the base 
    // address then it will lose the base address and it has new base address so why we can't 
    // changge or invrement the base address of an array .
    //And we all know that if we simply write name of an array then that name will point to the
    // base element of that array menas that array name have base address of that array.
    // lIke here marks and &marks have the address of first element which is '23'  
    printf("\n&marks :- %u\n",*(&marks));//It will print 1st element because &marks have address of 1st 
    // element or have base address.
    printf("marks :- %u\n",marks);
    printf("marks[0] :- %d\n",marks[0]);
    printf("0[marks] :- %d\n",0[marks]);
    printf("*(marks+3) : %d  ",*(marks+3));
    printf("4[marks] : %d\n",4[marks]);
    return 0;
}
