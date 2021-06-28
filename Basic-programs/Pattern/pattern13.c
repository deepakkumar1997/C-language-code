/* Print pattern like this :

          @
        @ @ @ 
      @ @ @ @ @ 
    @ @ @ @ @ @ @
*/

#include<stdio.h>

void pattern13(int n){
    char i,j,k;
    for(char i='a'; i<'a'+n; ++i){
        for(char j=i; j<'a'+n; ++j)
            printf("  ");
        for(char k='a'; k<=i; ++k)
            printf("@ ");
        for(char k=i; k>'a'; --k)
            printf("@ ");
        printf("\b \n");
    }
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("Input value of n : ");
    scanf("%d",&n);
    pattern13(n);
    return 0;
}
