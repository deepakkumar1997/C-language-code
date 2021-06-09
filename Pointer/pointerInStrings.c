#include<stdio.h>
int main()
{
    char s[10]="C-language";
    char *p;
    p = s;//~or p = &s[0];
    printf("%s\n",s);
    for(int i=0;*(p+i)!='\0';i++)
    printf("%c",*(p+i));
    printf("\n");
    return 0;
}