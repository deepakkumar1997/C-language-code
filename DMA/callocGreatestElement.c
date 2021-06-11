#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    printf("\nThis program will calculate greatest among 'n'-Real numbers :->\n");
    int n,i;
    printf("\nEnter no. of elements : ");
    scanf("%d",&n);
    ptr = (float*)calloc(n,sizeof(float));
    if(ptr!=NULL)
    {
        printf("\nEnter %d real numbers :->>\n\n",n);
        for(i=0;i<n;i++)
        {
            printf("Enter element %d : ",i+1);
            scanf("%f",ptr+i);
        }
        printf("\nYou have enterd these real numbers :->>>\n{ ");
        for(i=0;i<n;i++)
        {
            printf("%.3f, ",*(ptr+i));
        }
        printf("\b\b }");
        //Lets calculate greatest number among these
        float big=*ptr;
        for(i=1;i<n;i++)
        {
            if(*(ptr+i)>big)
            {
                big=*(ptr+i);
            }
        }
        printf("\n\nGreatest among these real number is : %.3f\n",big);
    }
    else{
        printf("Error! memory isn't allocated.");
        exit(0);
    }
    free(ptr);
    return 0;
}