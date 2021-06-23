/* ********************************** Wild Pointer *************************************
   Definition : 
                Uninitialized pointer is called wild pointer
                e.g. :- int *ptr;//Uninitialized pointer so it is wild.
                        *p=50;//Now illegal memory initialization.
                        int x;
                        p = &x;// It may create a blunder                               */

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int *ptr;
    *ptr = 50;/*if you initialize a value in a pointer which don't have any leagal address means
    a valid address in memory. Now ptr have an unvalid or illeagal or unrserved address stored
    in it so it will assign 50 to that invalid address and we can't access them and also 
    compiler will give an runtime error that Segmentation fault(core dumped) and it means that
    you are trying to assign a value or accessing a value which is not belog to you means that
    you are trying to assign/access an value in/from unreserved or free memory area.

    -> Core Dump/Segmentation fault is a specific kind of error caused by accessing memory that
    “does not belong to you.” 
 
        -> When a piece of code tries to do read and write operation in a read only location in
           memory or freed block of memory, it is known as core dump.
        -> It is an error indicating memory corruption.                                       */

    printf("*ptr = %d, ptr = %ls\n",*ptr,ptr);//It is also an error of core dumped/segmentation
    // fault because you are trying to access an unreserved memory location.
    return 0;
}