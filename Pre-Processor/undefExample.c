#include<stdio.h>
#define my_country "india"

int main(){
    printf("I'm citizen of %s.\n",my_country);
    #undef my_country
    printf("I'm citizen of .\n");//my_country);//if we use my_country here then it will say it is undefined.
    return 0;
}