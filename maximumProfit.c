#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int solve (int n,int* p ) {
   // Write your code here
   int i,j,max=0;
       int profit_copy[n] ;
 
       for(i=0;i<n;i++){
           profit_copy[i]=p[i];
       }
       
       for(i=1;i<n;i++){
           for(j=0;j<i;j++){
               if(p[i]>p[j] && p[i]%p[j]==0 && profit_copy[i] < profit_copy[j]+p[i]){
                   profit_copy[i] = profit_copy[j]+p[i];
               }
           }
       }
       for(i=0;i<n;i++){
           if(max < profit_copy[i]){
               max = profit_copy[i];
           }
       }
   return max;
}

int main() {
    int n;
    scanf("%d", &n);
    int i_p;
    int *p = (int *)malloc(n * sizeof(int));
    for(i_p=0; i_p<n; i_p++)
    	scanf("%d", &p[i_p]);

    int out_ = solve(n,p);
    printf("\n%d", out_);
}