#include<stdio.h>

enum month
{
    jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

int main()
{
    enum month m1;
    int i;
    printf("Value initialized in month's name :- \n{ ");
    for(i=jan;i<=dec;i++)
    printf("%d, ",i);
    printf("\b\b }\n");
    return 0;
}