#include<stdio.h>

void fun(){

    const int f=5;//constant variable-f
    const int *p=&f;// It is pointer to constant variable-f so from this we can make our 
    //variable safe from illeagal memory access //pointer(*p) to constant variable-f
    printf("f = %d\n",f);
    // here if you try to increment f throuh pointer *p like ++(*p) it will give error.
    //++(*p);
}

int main(){

    const int x=5;//constant variable-x
    int *p=&x;//pointer to variable-x
    printf("x = %d\n",x);
    ++(*p);// we can fix these illegal access by declaring pointer to const like in fun().
    printf("x = %d\n",x);
    fun();
    return 0;
}