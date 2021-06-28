/* Print pattern like this 

    1 2 3 4 5
    2 3 4 5
    3 4 5
    4 5 
    5
*/

#include<stdio.h>

void pattern3(int n){
    for(int i=1; i<=n; ++i){
        for(int j=i; j<=n; ++j)
            printf("%d ",j);
        printf("\b \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value for n ; ");
    scanf("%d",&n);
    pattern3(n);
    return 0;
}
