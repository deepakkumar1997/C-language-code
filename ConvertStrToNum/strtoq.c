// 

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char const *argv[])
{
    char str[25];
    //long long num;

    printf("Enter an integer number : ");
    fgets(str, 25, stdin);

    //num = strtoq(str, NULL, 10);
    printf("Your expected number is %lld\n",strtoq(str, NULL, 10));
    return 0;
}
