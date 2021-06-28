/* Print pattern like this : 

    5
    4 5
    3 4 5
    2 3 4 5
    1 2 3 4 5
*/

#include<stdio.h>

void pattern4(int n){
    for(int i=n; i>0; --i){
        for(int j=i; j<=n; ++j)
            printf("%d ",j);
        printf("\b \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern4(n);
    return 0;
}
