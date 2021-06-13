#include<stdio.h>

union item
{
    int x;
    float y;
    char z;
};

int main()
{
    union item i;
    i.x = 10;
    printf("x = %d\n",i.x);
    i.y = 5.77;
    printf("y = %f\n",i.y);
    printf("x = %d\n",i.x);
    i.z = 'D';
    printf("z = %c\n",i.z);
    printf("x = %d\n",i.x);
    printf("y = %f\n",i.y);
    printf("z = %c, y = %f\n",i.z,i.y);
    i.x = 20;
    printf("z = %c\n",i.z);
    printf("x = %d\n",i.x);
    printf("y = %f\n",i.y);
    return 0;
}