#include<stdio.h>

void func()
{
    const int x=5;
    const int *p=&x;
    const int **q=&p;
    printf("x = %d, *p = %d, **q = %d\n",x,*p,**q);
    //Now if you try to change value of x, *p, or **q then it will throw an error that you are
    // that you're trying to change value of read only variable-x
    //++x;
    //++*p;
    //++**q;

    const int y=10;
    p=&y;
    printf("y = %d, *p = %d\n",y,*p);
    /* Now if you want to change the value of pointer p then you can change it because here
       pointer var-p is not constant here "const int *p=&x"-> means it is pointer to constant
       variable-x simply it is saying that variable-x is constant. If you want to make a 
       pointer constant then see example pointerConstant.c */
    int z=20;
    const int *ptr=&z;
    printf("z = %d, *ptr = %d\n",++z,*ptr);
    /*Now you can change value of variable z because it is not constant but when you will try to 
      change value of z through *ptr. It will give an error that you are trying to change read
      only location " *ptr " so why this error when variable z is not an constant variable so 
      because of we made pointer to constant variable-z(i.e. const int *ptr=&z) so now on we 
      can't change value of z through *ptr because *ptr is pointer to constant variable-z. */
    //++*ptr; // It is an error we can't change value of pointer to constant variable
}

int main(){

    const int x = 5;//constant variable-x
    int *p=&x;// pointer to variable x;
    int **q=&p;//pointer to pointer to constant var-x
    printf("x = %d\n",x);
    **q=50;// assigning value in x through(**q) :-> pointer(q) to pointer(p) to constant var-x 
    printf("x = %d\n",x);
    func();
    return 0;
}