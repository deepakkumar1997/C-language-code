// print pattern like this
/*
   *
  * *
 * * *
* * * * 
*/
#include<stdio.h>

void pascalTriangle(int line){
    int i,j,k=1;

    for(i=0; i<line; ++i){
        for(j=1; j<=2*line-1; ++j){
            if(j>=line-i && j<=line+i && k){
                printf("*");
                k=0;
            }
            else{
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int line ;
    printf("Enter number of lines : ") ;
    scanf("%d",&line);
    pascalTriangle(line);

    return 0;
}