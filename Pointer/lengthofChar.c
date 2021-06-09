//Take an string as user input and find its length./
#include<stdio.h>
int charLength(char *p)
{
    int i;
    //I'm reading value through fgets so why I'm using '\n' for condition check 
    //Because fgets store characters till new line ~ which is '\n'~ new line./
    for(i=0;*(p+i)!='\n';i++);
    return i;
}
int main()
{
    char str[20];
    printf("Enter a string : ");
    fgets(str,20,stdin);
    printf("Length of string ~ %s \t\t\t\tis %d\n",str,charLength(str));
    return 0;
}