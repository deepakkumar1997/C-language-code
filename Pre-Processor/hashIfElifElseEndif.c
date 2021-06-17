#include<stdio.h>
#define COUNTRY India
#define India -1

int main(){

    #if COUNTRY == pakistan
        printf("Pakistan is a terrorist organazation.\n");
    #elif COUNTRY == bangladesh
        printf("Bangladesh's Currency is taka.\n")
    #elif COUNTRY == Nepal
        printf("Nepal's currency name is nepali rupees.\n");
    #else 
        printf("This is indian rupees.\n");
    #endif
    return 0;
}