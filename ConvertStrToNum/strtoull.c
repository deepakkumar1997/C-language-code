// Read a positve integer as numeric string and convert into positive integer

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char *str;
    long long unsigned num;

    printf("Enter a +ve integer : ");
    fgets(str, 20, stdin);

    num = strtoull(str, NULL, 10);
    printf("Your ecpected number is %llu\n",num);
    return 0;
}
