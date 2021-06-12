#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,n2,i;
    char* str;
    printf("Here, You can input n numbers of string");
    printf("\nEnter no. of elements : ");
    scanf("%d",&n1);
    //allocating the memory
    str=(char*)malloc(n1);
    printf("Address of previously allocated memory : ->\n");
    if(str==NULL)
    {
        printf("Error! memory isn't allocated.");
        exit(0);
    }
    for(i=0;i<n1;i++)
        printf("%u\n",str+i);
    printf("\nEnter new size of elements : ");
    scanf("%d",&n2);
    //reallocating the memory
    str=realloc(str,n2*sizeof(char));
    printf("Address of newly allocated memory : ->\n");
    for(i=0;i<n2;i++)
        printf("%d\n",str+i);
    free(str);
    return 0;
}