#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int solve (int n,int* p ) {
   // Write your code here
   int profit=*p;
   int j=0;
   printf("P = %d\n",profit);
   for(int i=1;i<n;i++)
   {
    if(*(p+i)%*(p+j)==0)
    {
        j=i;
        profit+=*(p+i);
        printf("%d ",profit);
    }
   }
   return profit;
}

int main() {
    int n;
    scanf("%d", &n);
    int i_p;
    int *p = (int *)malloc(n * sizeof(int));
    for(i_p=0; i_p<n; i_p++)
    	scanf("%d", &p[i_p]);

    int out_ = solve(n,p);
    printf("%d", out_);
    return 0;
}