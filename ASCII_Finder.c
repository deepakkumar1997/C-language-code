#include<stdio.h>
void asciiFinder(char ch[])
{
    int i;
    //~fgets reads data till '\n' or line break that's why I'm using \n for condition check
    for(i=0;ch[i]!='\n';i++)
    {
        printf("~The ASCII value of ['%c'] is %d\n",ch[i],ch[i]);
    }
}
void input(char str[])
{
    printf("Enter a character or a string to find their ASCII value : ");
    fgets(str,20,stdin);
}
int main()
{
    char s[20];
    input(s);
    asciiFinder(s);
    return 0;
}