#include<stdio.h>
#define square(a) a*a
#define cube(a) (a)*(a)*(a)

int main(){
    int a;
    printf("Enter any integer to find it's square : ");
    scanf("%d",&a);
    printf("Square of (%d) : %d\n",a,square(a));
    printf("Cube of (%d) : %d\n",a,cube(a));
    printf("Square of 5+5 without~() : %d\n",square(5+5));
    printf("Cube of 3+4 with~() : %d\n",cube(3+4));
    return 0;
}