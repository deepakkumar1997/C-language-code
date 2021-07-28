// Read a real number as numeric string and convert it into real number using strtold;

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[20];
    long double num;

    printf("Enter a real number : ");
    fgets(str, 20, stdin);

    num = strtold(str, NULL);
    printf("your expected number is %.2Lf\n",num);
    return 0;
}
