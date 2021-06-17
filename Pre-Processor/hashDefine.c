#include<stdio.h>
#include<string.h>
#define a 10+10
#define pf printf
#define sf scanf

typedef struct student
{
    /* data */
    char name[20];
    int age;
}STUDENT;

int main(){
    pf("Result(10+10*10+10) : %d\n",a*a);
    STUDENT s1;
    pf("Enter your name : ");
    fgets(s1.name,20,stdin);
    s1.name[strcspn(s1.name, "\n")] = 0;//strcspn used to find an char in a string.
    pf("Enter your age : ");
    sf("%d",&s1.age);
    pf("\nHello! %s your age is %d.\n",s1.name,s1.age);
    return 0;
}
