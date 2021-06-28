/* Print pattern like this : 
    5
    5 4
    5 4 3
    5 4 3 2
    5 4 3 2 1
*/

#include<stdio.h>

void pattern5(int n){
    for(int i=n; i>0; --i){
        for(int j=n; j>=i; --j)
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
