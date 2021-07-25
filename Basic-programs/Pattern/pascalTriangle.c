// Print Pascal Triangle : 
/* sample :--

            1
          1   1
       1    2   1
    1    3    3   1
  1   4     6    4   1
1   5   10    10   5   1

*/

#include<stdio.h>

int factorial(int line){
    if(line<=1)
        return 1;
    else return line*factorial(line-1);
}

int lineCombination(int n, int r){
    return (factorial(n)/factorial(n-r)/factorial(r));
}

void pascalTriangle(int line){
    int i,j,k=1,r;

    for(i=0; i<line; ++i){
        r=0;
        for(j=1; j<=2*line-1; ++j){
            if(j>=line-i && j<=line+i && k){
                printf("%2d",lineCombination(i,r++));
                k=0;
            }
            else{
                printf("  ");
                k=1;
            }
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int line;
    printf("Enter number of lines : ") ;
    scanf("%d",&line);

    pascalTriangle(line);

    return 0;
}