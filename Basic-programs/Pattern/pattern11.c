/* Print pattern like this :

          1
        2 1 2
      3 2 1 2 3
    4 3 2 1 2 3 4
*/

#include<stdio.h>

void pattern11(int n){
    int d,i,j,k;
    for(i=1; i<=n; ++i){
        for(j=n; j>i; --j)
            printf("  ");
        for(k=i; k>=1; --k)
            printf("%d ",k);
        for(d=2; d<=i; ++d)
            printf("%d ",d);
        printf("\b \n");

    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern11(n);
    return 0;
}
