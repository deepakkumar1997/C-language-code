#include<stdio.h>

enum days { mon=1, tue, wed, thu, fri, sat, sun };

enum flags 
{
    working=1, freezed =0 , failed = 0
};

int main()
{
    int i;
    printf("Value initialized in days -> { ");
    for(i=mon;i<=sun;i++)
    printf("%d, ",i);
    printf("\b\b }\n");
    enum flags status;
    if(status)
    printf("Working.....\n");
    else
    printf("Failed or Freezed\n");
    return 0;
}