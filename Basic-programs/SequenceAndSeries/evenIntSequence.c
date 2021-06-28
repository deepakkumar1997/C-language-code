// 2, 4, 6, 8, 10, ............, n

#include<stdio.h>

void evenIntSequence(int n){
    for(int i=2; i<=n; i+=2)
        printf("%d, ",i);
    printf("\b\b \n");
    return;
}

int main(int argc, char const *argv[])
{
    
    int num;
    printf("Input value of last term in sequence : ");
    scanf("%d",&num);
    evenIntSequence(num);
    return 0;
}
