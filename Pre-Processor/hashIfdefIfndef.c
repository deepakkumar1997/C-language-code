#include<stdio.h>
#define COUNTRY "India"

int main(){
    #ifdef COUNTRY
        printf("%s is a great country.\n",COUNTRY);
    #endif
    #ifndef COUNTRY
        printf("I love my country.\n");
    #endif
    return 0;
}