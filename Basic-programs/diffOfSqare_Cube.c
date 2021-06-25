/* Input a number and print the difference between it's cube and square. */

#include<stdio.h>

double square(float n){
    return n*n;
}

double cube(float n){
    return n*n*n;
}

double difference(float n){
    return cube(n) - square(n);
}

int main(){

    float n;
    printf("Enter a number : ");
    scanf("%f",&n);
    printf("Difference of cube and square of %.2f is %.3lf\n",n,difference(n));
    return 0;
}