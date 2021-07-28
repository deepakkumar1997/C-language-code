// Take a numeric string and convet it into long integer

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char *str;
    long num;

    printf("Enter an integer : ");
    fgets(str, 20, stdin);

    num = atol(str);
    printf("Your expected integer is %ld\n",num);
    return 0;
}
