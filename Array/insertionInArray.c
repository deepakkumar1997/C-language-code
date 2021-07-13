// Create an array of size 50 and insert some elements from asking user that how many elements 
// do you want enter and insert an element in the array and also delete and traverse as well.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    
    int arr[50],size,pos,newElement;
    printf("How many elements do you want to enter(1-50) : ");
    scanf("%d",&size);
    if(size < 1 || size > 50){
        printf("Size is out of bound!\n");
        exit(0);
    }
   
    // Taking elements from user
    for(int i=0; i<size; ++i){
        printf("Input element at index %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nElements in the array [ ");
    for(int i=0; i<size; ++i)
        printf("%d, ",arr[i]);
    printf("\b\b ]\n");
   
    // Inserting a new element in the array at specific position 
    printf("Enter a position to insert a new element : ");
    scanf("%d",&pos);
    if(pos < 1 || pos > size+1)
        printf("Invalid position\n");
    else{
        printf("Input element do you want to insert at position %d : ",pos);
        scanf("%d",&newElement);
        for(int i=(size -1); i>=(pos-1); --i)
            arr[i+1] = arr[i];
        arr[pos-1] = newElement;
        size++; 
    }
    printf("\nElements in the array after insertion [ ");
    for(int i=0; i<size; ++i)
        printf("%d, ",arr[i]);
    printf("\b\b ]\n");
    
    // Inserting an element at begining 
    printf("Enter an element do you want to insert at begining : ");
    scanf("%d",&newElement);
    for(int i=(size-1); i>=0; --i)
        arr[i+1] = arr[i];
    arr[0] = newElement;
    size++;
    printf("\nElements in the array after insertion [ ");
    for(int i=0; i<size; ++i)
        printf("%d, ",arr[i]);
    printf("\b\b ]\n");

    // Inserting an element at the end of the array
    printf("Enter an element do you want to enter at end : ");
    scanf("%d",&newElement);
    arr[size] = newElement;
    size++;
    printf("\nElements in the array after insertion [ ");
    for(int i=0; i<size; ++i)
        printf("%d, ",arr[i]);
    printf("\b\b ]\n");

    return 0;
}