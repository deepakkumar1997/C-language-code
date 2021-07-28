// Read a integer as numeric string and convert it into long long integer using atoll

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char *str;
    long long num;

    printf("Enter a integer : ");
    scanf("%[^\n]%*c",str);

    num = atoll(str);
    printf("Your expected number is %lld\n",num);
    return 0;
}
