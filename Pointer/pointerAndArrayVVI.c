

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int grade[] = {9, 8, 5, 7, 6};
    int *p = grade;
    printf("*grade = %d\n",*grade);
    printf("*p = %d\n",*p);
    printf("grade : %u\n",grade);
    printf("p = %u\n",p);
    printf("grade+1 = %u\n",grade+1);
    printf("&grade +1 = %u\n",&grade+1);
    printf("grade+2 = %u\n",grade+2);
    printf("&grade +2 = %u\n",&grade+2);
    printf("\n *(grade+1) : %d, *grade + 1 : %d\n",*(grade+1),*grade+1);
    printf("\n *(grade+1) : %d, *grade + 1 : %d\n",*(grade+4),*grade+4);
    return 0;
}
