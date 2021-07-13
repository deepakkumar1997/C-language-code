// Take input from user and store it in an array;

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int n;
    printf("How many elements do you want insert in array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in array..........\n",n);
    for(int i=0; i<n; ++i){
        printf("Enter element at index %d : ",i);
        scanf("%d",&i[arr]);
        printf("You've entered : %d\n",arr[i]);
    }
    return 0;
}
