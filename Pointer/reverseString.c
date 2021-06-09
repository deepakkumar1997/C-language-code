#include<stdio.h>
char* reverseStr(char *p)
{
    int i,j;
    char temp;
    for(j=0;*(p+j)!='\0';j++);
    for(i=0;i<j/2;i++)
    {
        temp = *(p+i);
        *(p+i) = *(p+j-1-i);
        *(p+j-1-i) = temp;
    }
    return p;
}
int main()
{
    printf("\n%s",reverseStr("DeepaK"));
    return 0;
}