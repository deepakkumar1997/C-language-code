#include<stdio.h>
#include<string.h>

void swap(char *ch1, char *ch2){
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}

int factorialStr(int n){
    int fact = 1;
    for(int i=1; i<=n; ++i)
        fact *= i;
    return fact;
}

void permutationOfStrIterative(char *str, int len, int count){
    int i, j,l=1;
    for(i=0,j=0; i<count; ++i, ++j){
        printf("%s %d\n",str,j);
        if(j==(len-1))
        {
            j = -1;
            swap(&str[j+1], &str[len-(++l)]);
        }
        else
            swap(&str[j], &str[len-1]);
    }
}

int main(int argc, char const *argv[])
{
    
    char str[] = "ABC";
    int len = strlen(str);
    int count = factorialStr(len);
    printf("%s %d  %d",str,len,count);
    permutationOfStrIterative(str,len,count);
    return 0;
}
