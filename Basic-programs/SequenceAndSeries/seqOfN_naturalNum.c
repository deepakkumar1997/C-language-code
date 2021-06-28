/* print 1, 2, 3, 4, 5, ........., n  */

#include<stdio.h>

void naturalNumSequence(int n){
    for(int i=1; i<=n; i++)
        printf("%d, ",i);
    printf("\b\b");
    return;
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n of the sequence : ");
    scanf("%d",&n);
    naturalNumSequence(n);
    printf(" \n");
    return 0;
}
