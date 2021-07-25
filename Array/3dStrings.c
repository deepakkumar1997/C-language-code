#include <stdio.h>
#include <string.h>

int main()
{
  char trip[2][3][5] = {
      {"suit1","suit","suit3"},
      {"pass","pass2","pass3"}
  };
    printf("%ld ",sizeof(trip));
    printf("%ld ",strlen(trip[0][0]));
    //for(int i=0; i<strlen(trep))
    printf("%ld ",sizeof(trip[0]));
    printf("%ld ",sizeof(trip[0][0]));
    printf("Please bring the following:\n");
    for (int i = 0; i < sizeof(trip)/sizeof(trip[0]); i++) {
       for(int j=0; j<sizeof(trip[0])/sizeof(trip[0][0]); ++j){
           printf("%d | ",j);
           for(int k=0; k<strlen(trip[i][j]); ++k){
               printf("%c ",trip[i][j][k]);
           }
           printf("\n");
       }
    printf("\n");
    }
  return 0;
} 