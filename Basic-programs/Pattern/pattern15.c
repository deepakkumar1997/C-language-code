/* Print pattern like this :

          *
        * * *
      * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/

#include<stdio.h>

void pattern15(int n){
    int i,j,k,l;
    for(i=0; i<n; ++i){
        for(j=i; j<n-1; ++j)
            printf("  ");
        for(k=0; k<=i; ++k)
            printf("* ");
        for(l=i; l>0; --l)
            printf("* ");
        printf("\b \n");
    }
    for(i=1; i<n; ++i){
        for(j=i; j>0; --j)
            printf("  ");
        for(k=i; k<n; ++k)
            printf("* ");
        for(l=i; l<n-1; ++l)
            printf("* ");
        printf("\b \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern15(n);
    return 0;
}