#include<stdio.h>
#include<ctype.h>
_Bool isPalindrome(char * s){
    int i,j;
    
    //First convert inputted string in lowercase
    for(int i = 0; *(s+i); i++)
    {
        *(s+i) = tolower(*(s+i));
    }
    printf("%s\n",s);
    
    //Second you have to keep only alphabets
    i=0,j=0;
    while(s[i])
    {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i]>=48 && s[i]<=57)
          s[j++] = s[i];
		i++;
    }
    s[j] = '\0';
    printf("%s\n",s);
    
    //Now last compare character of 1st and last block and so on
    for(i=0;*(s+i)!='\0';i++);
    for(j=0;j<i/2;j++)
    {
        if(*(s+j)!=*(s+i-1-j))
            return 0;
        //printf("%d%d ",j,i-1-j);
    }
    //printf("\nCount = %d",c);
    return 1;
}
int main()
{
	char str[50];
    _Bool b;
    printf("\n\t Enter a string : ");
	fgets(str,50,stdin);
	b=isPalindrome(str);
	if(b==1)
        printf("\nAlphaNumeric in it is  Palindrome.\n");
    else
        printf("\nAlphaNumeric in it isn't  Palindrome.\n");
	return 0;
}