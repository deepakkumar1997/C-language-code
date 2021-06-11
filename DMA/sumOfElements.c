#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n,i,sum=0;
    printf("Here, we'll calculate sum of elements entered by the user :->\n\n");
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(*ptr));
    if(ptr==NULL)
    {
        printf("Error! memory is not allocated.");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i+1);
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("\nSum of elements : %d\n",sum);
    free(ptr);
    return(0);
}