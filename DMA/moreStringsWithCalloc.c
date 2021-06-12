#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
  char str[20];
  char *ptr;
  int n,i;
  
  printf("\nEnter no. of elements : ");
  scanf("%d",&n);
  
  ptr = (char *)calloc(n,sizeof(str)); 

  int n1=n;
  for(i=0;i<n*sizeof(str);i+=sizeof(str))
  {
    printf("Enter string %d : ",n-(--n1));
    scanf("%s",ptr +i);
    //fgets(ptr+i,20,stdin);
  }

  for(i=0;i<n*sizeof(str);i+=sizeof(str))
  {
    printf("\nAddress : %u -> Data : %s\n",ptr+i,ptr+i);
  } 
  printf("\n");
  free(ptr);
  return 0;
}