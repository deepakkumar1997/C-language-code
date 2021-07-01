// Print fibonacci series till n-terms

#include<stdio.h>

void fibonacciSeries(int n){
    int term_0 = 0;
    int term_1 = 1;
    if(n==0)
        printf("Fibonacci Series till term 0 is { 0 }\n");
    else if(n==1)
        printf("Fibonacci Series till term 1 is { 0, 1 }\n");
    else{
        printf("Fibonacci Series till term %d is { 0, 1, ",n);
        for(int i=2; i<=n; i++){
            int current_term = term_0 + term_1;
            printf("%d, ",current_term);
            term_0 = term_1;
            term_1 = current_term ;
        }
        printf("\b\b } \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input number of terms : ");
    scanf("%d",&n);
    fibonacciSeries(n);
    return 0;
}
