//Take an array of integers and sort using bubble sort and also use pointer./
#include<stdio.h>
void input(int *p){
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter an integer at index %d : ",i);
        scanf("%d",(p+i));
    }
}
void output(int *p){
    int i;
    for(i=0;i<5;i++)
    printf("Value at index %d is %d\n",i,*(p+i));
    printf("\n");
}
void sort(int *p){
    int i,round,temp;
    for(round=1;round<5;round++)
    {
        for(i=0;i<5-round;i++)
        if(*(p+i)>*(p+i+1))
        {
            temp = *(p+i);
            *(p+i) = *(p+i+1);
            *(p+i+1) = temp;
        }
    }
}
int main()
{
    int arr[5];
    input(arr);
    printf("~~~~~ You've entered ~~~~~\n");
    output(arr);
    sort(arr);
    printf("After sorting in ascending order ~\n");
    output(arr);
    return 0;
}