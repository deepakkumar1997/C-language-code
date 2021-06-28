/* Print pattern like this : 

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5    

*/

#include <stdio.h>

// Complete the code to print the pattern.
void patternHackerank(int n){
    int i,j,k,l,m;
    for(i=n; i>0; --i){
        for(j=n; j>=i; --j)
            printf("%d ",j);
        for(k=2; k<=i; ++k)
            printf("%d ",i);
        for(l=2; l<=i; ++l)
            printf("%d ",i);
        for(m=i+1; m<=n; ++m)
            printf("%d ",m);
        printf("\n");
    }
    for(i=2; i<=n; ++i){
        for(j=n; j>=i; --j)
            printf("%d ",j);
        for(k=2; k<=i; ++k)
            printf("%d ",i);
        for(l=2; l<=i; ++l)
            printf("%d ",i);
        for(m=i+1; m<=n; ++m)
            printf("%d ",m); 
        printf("\n");
    }
}

int main() 
{

    int n;
    printf("Input value of n : ");
    scanf("%d", &n);
  	patternHackerank(n);
    return 0;
}
