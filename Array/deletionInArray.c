// Take an array of elements from user and perform delete operation 

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    
    int arr[50], i, size, pos;
    
    // Taking array of elements
    printf("How many elements do you enter in array : ");
    scanf("%d",&size);
    if(size<1 || size>50){
        printf("Size is out of bound!");
        exit(0);
    }
    for(i=0; i<size; ++i){
        printf("Enter element at index %d : ",i);
        scanf("%d",&arr[i]);
    }

    // Printing array of elements
    printf("Array of elements [ ");
    for(i=0; i<size; ++i)
        printf("%d, ",arr[i]);
    printf("\b\b ]\n");

    // Deleting elements at specific position
    printf("Input postion to delete element : ");
    scanf("%d",&pos);
    for(i=(pos-1); i<(size-1); ++i)
        arr[i] = arr[i+1];
    arr[size-1] = 0;
    size--;

    printf("Array of elements after deletion at pos %d [ ",pos);
    for(i=0; i<size; ++i)
        printf("%d, ",arr[i]);
    printf("\b\b ]\n");

    // Deleting first element of array
    for(i=0; i<size-1; ++i)
        arr[i] = arr[i+1];
    --size;
    arr[size] = 0;

    printf("Array of elements after deletion of first element [ ");
    for(i=0; i<size; ++i)
        printf("%d, ",arr[i]);
    printf("\b\b ]\n");

    // Deleting last element of array
    arr[size-1] = 0;
    --size;

     printf("Array of elements after deletion of end element [ ");
    for(i=0; i<size; ++i)
        printf("%d, ",arr[i]);
    printf("\b\b ]\n");

    return 0;
}
