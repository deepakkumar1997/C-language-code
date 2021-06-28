/* Print pattern like this :

    * * * *
     * * *
      * *
       *      
      * * 
     * * *
    * * * *
*/

#include<stdio.h>

void pattern7(int n){
    int i,j,k;
    for(i=0; i<n; ++i){
        for(j=i; j>0; --j)
            printf(" ");
        for(k=i; k<n; ++k)
            printf("* ");
        printf("\n");
    }
    for(i=0; i<n-1; ++i){
        for(j=i; j<n-2; ++j)
            printf(" ");
        for(k=0; k<=i+1; ++k)
            printf("* ");
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern7(n);
    return 0;
}
