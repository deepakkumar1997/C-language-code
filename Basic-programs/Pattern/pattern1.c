/* Print pattern like that 

    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include<stdio.h>

void pattern1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
            printf("%d ",j+1);
        printf("\b \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern1(n);
    return 0;
}
