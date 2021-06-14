#include<stdio.h>
#include<string.h>

typedef struct
{
    int rollno;
    char name[20];
    int age;
}STUDENT;

int main()
{
    STUDENT s1;
    s1.rollno = 9;
    strcpy(s1.name, "Deepak Kumar Pandey");
    s1.age = 24;
    printf("Hi! %s your Roll No is %d & your age is %d\n",s1.name,s1.rollno,s1.age);
    return 0;
}