// Take a numeric string and convert in into integer using strtol
// syntax : strtol(str, str_end, base), e.g. strtol(str, NULL, 10);

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char *str;
    long long unsigned num;
    
    printf("Enter a numeric string : ");
    fgets(str, 19, stdin);

    num = strtol(str, NULL, 10);
    printf("Your expected number is : %llu\n",num);
    return 0;
}
