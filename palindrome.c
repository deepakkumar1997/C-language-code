#include<stdio.h>
#include<ctype.h>
void lower(char *p)
{
    //for ( ; *p; ++p) *p=tolower(*p);
    for(int i = 0; *(p+i); i++){
    *(p+i) = tolower(*(p+i));
}
    printf("LowerCase : %s\n",p);
}
int main()
{
    char s[10];
    scanf("%s",s);
    lower(s);
    return 0;
}