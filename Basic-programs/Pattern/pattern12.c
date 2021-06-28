/* Print pattern like this : 

          1
        2 3 2
      3 4 5 4 3
    4 5 6 7 6 5 4
*/

#include<stdio.h>

void pattern12(int n){
    int d,i,j,k,l=1;
    for(d=1; d<=n; d+=2){
        for(i=d; i<n; i+=2)
            printf("  ");
        for(j=l; j<=d; ++j)
            printf("%d ",j);
        for(k=d-1; k>=l; --k)
            printf("%d ",k);
        printf("\b \n");
        ++l;
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n ; ");
    scanf("%d",&n);
    pattern12(n);
    return 0;
}