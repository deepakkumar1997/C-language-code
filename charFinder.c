//Here I'll find character available at a specfic ascii value
#include<stdio.h>
void charFinder(int value)
{
    printf("Character ['%c'] present at ASCII~%d\n",value,value);
}

int input(int n)
{
    printf("Enter a ASCII value to find character available at that value : ");
    scanf("%d",&n);
    return n;
}

int main()
{
    int num;
    int val=input(num);
    charFinder(val);
    return 0;
}