/* Print pattern like this : 

    1
    2 3
    4 5 6
    7 8 9 10
*/

#include<stdio.h>

void pattern17(int n){
    int i,k;
    int j=0;
    for(i=1; i<=n; ++i){
        for(k=1; k<=i; ++k){
            printf("%d ",++j);
            if(j<10) printf(" ");
        }
        printf("\b \n");
    }
}

void pattern17a(int n){
    int value=1, i, inc=1,j;
    while(value<=n){
        for(i=0; i<inc; ++i,++value){
            printf("%d  ",value);
            if(value<10) printf(" ");
        }
        printf("\b \n");
        ++inc;
    }
}


int main(int argc, char const *argv[])
{
    
    int n,target; 
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern17(n);
    printf("Input target value : ");
    scanf("%d",&target);
    pattern17a(target);
    return 0;
}
