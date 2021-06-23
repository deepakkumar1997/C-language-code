#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int x=7;
    int *const ptr=&x;//Here pointer ptr is constant but variable-x is not so be careful it 
    // can be incremented using another pointer so first make a variable constant then assign
    // it to a constant pointer,
    int y=9;
    //ptr=&y;// It will give an error that you are trying to assign in a read only location.
    printf("x = %d, *ptr = %d\n",x,*ptr);
    int *ptr1=&x;
    ptr1=&x;
    *ptr1=56;// Here you can see I'm assiging 56 to var-x through another pointer and it will
    // give no error so be careful. When you want to assign an variable address to an constant 
    // pointer and you don't want that will be changed then you should also make that variable
    // constant first then assign the address of that variable to a constant pointer.
    printf("x = %d, *ptr = %d\n",x,*ptr);
    return 0;
}
