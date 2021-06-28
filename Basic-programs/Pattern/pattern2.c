/* Print pattern like this

    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/

#include<stdio.h>

void pattern2(int n){
    for(int i=n; i>0; --i){
        for(int j=0; j<i; ++j)
            printf("%d ",j+1);
        printf("\b \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern2(n);
    return 0;
}
