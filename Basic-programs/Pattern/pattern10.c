/* Print pattern like this : 

             *
           * *
         * * *
       * * * *
         * * *
           * *
             *
*/

#include<stdio.h>

void pattern10(int n){
    int i,j,k;
    for(i=0; i<n; ++i){
        for(j=i; j<n-1; ++j)
            printf("  ");
        for(k=0; k<=i; ++k)
            printf("* ");
        printf("\b \n");
    }
    for(i=0; i<n-1; ++i){
        for(j=0; j<=i; ++j)
            printf("  ");
        for(k=i; k<n-1; ++k)
            printf("* ");
        printf("\b \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern10(n);
    return 0;
}
