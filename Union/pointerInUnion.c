#include<stdio.h>

union pointer
{
    int x,y;
    char ch;
};

int main()
{
    union pointer p1;
    union pointer *p2;
    p2 = &p1;
    p1.x = 68;
    printf("X = %d ch = %c\n",p2->x,p2->ch);
    //%c will print 'D' becaude data available at that address is '68' & it is ascii value of 'D'
    return 0;
}