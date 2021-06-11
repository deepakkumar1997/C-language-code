#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    //calloc() takes two arguments first is "Number of elements" and second is "Size of each element"
    p=(int*)calloc(5,2);// calloc(No. of Elements, Size of elements)
    if(p==NULL)
    {
        printf("Error! memory is not allocated.");
        exit(0);
    }
    printf("Enter 5 elements : ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    printf("You've entered : ");
    int i=-1;
    while(i++<4)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    free(p);
    return 0;
}