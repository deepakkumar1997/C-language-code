// Take an numeric string as input and convert it into integer and add 100 into it and print

#include<stdio.h>
//#include<string.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char str[20];
    long long unsigned num;

    printf("Enter a numeric string : ");
    fgets(str, sizeof(str), stdin);

    num = atoi(str);
    printf("%llu\n",num+100);
    return 0;
}
