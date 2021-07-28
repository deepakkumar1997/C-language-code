// Read integer as numeric string and convert it into string using strtoll(str, NULL, base)

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char *str;
    long long num;

    printf("Enter a integer number : ");
    fgets(str, 20, stdin);
    
    num = strtoll(str, NULL, 10);
    printf("Your expected number is %lld\n",num);
    return 0;
}
