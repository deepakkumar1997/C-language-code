//********************** Register Storage Class *********************************
// keyword : register ,e.g. -> register int x=6;
// It has all properties same as automatic storage class except it stores value in register.
/* One more condition is that if you are initializing a value as register storage that does not
 mean that it will stored in register it depends on how frequently you are using that var. */

#include<stdio.h>

int main(){

    register int a=0;
    auto int b=0;
    printf("a = %d\n",a++);
    printf("a = %d & now a = %d\n",a++,++a);//a++ means a = a+1 or a+=1 
    // when we use ++ means increment operater as postfix i.e. a++ then it returns original 
    // value of a and then increments a by 1 like below
    // a++ = a = a+1, it works like a=a then a=a+1;
    // ++a works like it increments first then returns incremented value like a = a+1; then a=b
    a = b++;
    printf("a = %d b = %d\n",a,b);
    printf("a = %d, b = %d now b = %d\n",++a,b++,b);
    printf("a = %d b = %d\n",++a,++b);
    return 0;
}