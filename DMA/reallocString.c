#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n1,n2,i;
    char str[20], *ptr;
    printf("Here, You can input n numbers of string");
    printf("\nEnter no. of elements : ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("Enter string %d : ");
        fgets(str[i],20,stdin);
    }
    //allocating the memory
    ptr=(char*)malloc(n1*strlen(str+1));
    printf("Address of previously allocated memory : ->\n");
    if(str[20]==NULL)
    {
        printf("Error! memory isn't allocated.");
        exit(0);
    }
    for(i=0;i<n1;i++)
        printf("%u\n",str[20]+i);
    printf("\nEnter new size of elements : ");
    scanf("%d",&n2);
    //reallocating the memory
    str[20]=realloc(str,n2*sizeof(char[20]));
    printf("Address of newly allocated memory : ->\n");
    for(i=0;i<n2;i++)
        printf("%d\n",str[20]+i);
    free(str[20]);
    return 0;
}