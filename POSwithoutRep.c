// Take a string from user and print all distinct permutation.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(char *x, char *y){
    char temp = *x; 
    *x = *y;
    *y = temp;
}

void POSwithoutRep(char *s, int i, int n, char *arr){
    int j;
    static int k;
    if(i==n){
        printf("%s ",s);
        while(k<(strlen(arr)/(n+1)))
            arr[k++] = *s;
            printf("%s %d\n",(arr+k),k);
    }
    else
        for(j=i; j<=n; ++j){
            swap(s+i, s+j);
            POSwithoutRep(s, i+1, n, arr);
            swap(s+i, s+j);
        }
}

int factorial(int n){
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}

int main(int argc, char const *argv[])
{
    
    char str[10];
    printf("Enter a string to find its distinct permutation : ");
    scanf("%[^\n]%*c",str);
    int n = strlen(str);
    printf("strken-%d",factorial(n));
    char *posArr = (char *)malloc((n)*factorial(n));
    POSwithoutRep(str, 0, n, posArr);
    printf("\n");
    for(int i=0; i<factorial(n); ++i){
        //printf("%s ",(posArr+i));
    }
    printf("\n");
    return 0;
}
