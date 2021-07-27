// take a real numeric string and convert int into real numbers using atof

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char numericStr[20];
    long double num;

    printf("Enter a real number : ");
    fgets(numericStr, 20, stdin);

    num = atof(numericStr);
    printf("Your expected number is ; %.2Lf\n",num);

    return 0;
}
