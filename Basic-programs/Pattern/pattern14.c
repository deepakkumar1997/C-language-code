/* Print pattern like this :

          A
        A B A
      A B C B A
    A B C D C B A
*/

#include<stdio.h>

void pattern14(int n){
    char i,j,k;
    for(i='A'; i<'A'+n; ++i){
        for(j=i; j<'A'+n-1; ++j)
            printf("  ");
        for(k='A'; k<=i; ++k)
            printf("%c ",k);
        for(int l=i-1; l>='A'; --l)
            printf("%c ",l);
        printf("\b \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern14(n);
    return 0;
}
