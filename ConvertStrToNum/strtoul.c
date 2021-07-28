// Take a unsigned long integer as numeric string and convert it into unsigned long integer.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char *str;
    long unsigned num;

    printf("Enter a positive integer : ");
    fgets(str, 20, stdin);

    num = strtoul(str, NULL, 10);
    printf("Your expected +ve integer is %lu\n",num);
    return 0;
}
