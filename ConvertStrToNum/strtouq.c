#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char str[25];

    fgets(str,25,stdin);

    printf("Number = %lld\n",strtouq(str, NULL,10));
    return 0;
}
