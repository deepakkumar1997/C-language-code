//**************************** Automatic ***********************************
// Keyword : auto
//If we don't use any storage class before any variable then by default it is auto .
// like "int x=5;" is same as "auto int x=5;"

#include<stdio.h>

int main(){

    auto int x=5;
    printf("x = %d\n",x);
    {
        auto int x = 2;
        printf("x = %d\n",x);
    }
    printf("x = %d\n",x);
    return 0;
}