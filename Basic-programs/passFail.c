/* Input marks between 0 to 100 and print pass if marks is greater than 50 else print fail. */

#include<stdio.h>

typedef enum boolean{
    false, true
}bool;

bool passFail(float marks){
    if(marks>=50)
    return true;
    else
    return false;
}

float inputMarks(){
    float marks;
    mark:
    printf("Enter your marks out of 100 : ");
    scanf("%f",&marks);
    if(marks<0 || marks>100){
        printf("Please, enter your marks out of 100\n");
        goto mark;
    }
    return marks;
}

int main(int argc, char const *argv[])
{
    
    float m = inputMarks();
    bool r = passFail(m);
    if(r)
    printf("You are passed!\n");
    else
    printf("You are failed!\n");
    return 0;
}