#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n1,i;
    char* str;
    printf("Here, You can input n numbers of character");
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
    {
        printf("Enter character %d : ",i);
        scanf("%c",str+i);
        scanf("%c",str+i);
    }
    for(i=0;i<n1;i++)
        printf("Address : %u -> Data : %c\n",str+i,*(str+i));
    free(str);
    return 0;
}