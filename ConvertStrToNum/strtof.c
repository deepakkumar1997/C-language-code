// Take numeric string and convert it into real numbers using strtof(str, NULL)

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    char *str;
    double num;

    printf("Enter a real number : ");
    fgets(str, 20, stdin);

    num = strtof(str, NULL);
    printf("Your expected number is %.2lf\n",num);

    char numericStr[] = "365.25 7";
    char *split;
    double num2;

    num = strtof(numericStr,&split);
    num2 = strtof(split,NULL);

    printf("%.2lf %.2lf\n",num,num2);
    printf("Week in a non leap year : %.2lf\n",num/num2);
    return 0;
}
