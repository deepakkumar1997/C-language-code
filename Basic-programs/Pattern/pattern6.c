/* Print pattern like this :

        5 4 3 2 1
        5 4 3 2
        5 4 3
        5 4
        5
*/

#include<stdio.h>

void pattern6(int n){
    for(int i=1; i<=n; ++i){
        for(int j=n; j>i-1; --j)
            printf("%d ",j);
        printf("\b \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern6(n);
    return 0;
}
