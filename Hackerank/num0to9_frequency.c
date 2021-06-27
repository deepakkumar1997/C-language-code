/* Given a string, s , consisting of alphabets and digits, find the frequency of each digit in
the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints
1<= len(s)<=1000

All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

Sample Input 0

a11472o5t6
Sample Output 0

0 2 1 0 1 1 1 1 0 0  */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[1001];
    scanf("%s",s);
    int frequency[10]={0},d;
    for(int i=0; i<strlen(s); ++i){
        for(int j=48,d=0; j<=57; ++j,++d){
            if(s[i]==j)
            {
                frequency[d] +=1;
                break;
            }
        }
    } 
    for(int j=0; j<=9; ++j)
    printf("%d ",frequency[j]); 
    return 0;
}