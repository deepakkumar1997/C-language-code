#include<stdio.h>
#include<ctype.h>
_Bool isPalindrome(char * s){
    int i,j,c=0;
    //first remove space from inputted string
    i=0,j=0;
    while(s[i])
    {
        if(s[i] != ' ')
          s[j++] = s[i];
		i++;
    }
    s[j] = '\0';
    printf("Without space = %s\n",s);
    //second convert inputted string in lowercase
    for(int i = 0; *(s+i); i++)
    {
        *(s+i) = tolower(*(s+i));
    }
    printf("InLowerCase = %s\n",s);
    //Now compare character of 1st and last block and so on
    for(i=0;*(s+i)!='\0';i++);
    printf("value of i = %d\n",i);
    for(j=0;j<i/2;j++)
    {
        //printf("%d\n",j);
        if(*(s+j)!=*(s+i-2-j))
            return 0;
            //c++;
        //printf("%d%d\n",j,i-2-j);
    }
    return 1;
    /* if(c>0)
    printf("%d",c);
    else 
    printf("True"); */
}
int main()
{
	char str[50];
    _Bool b;
    printf("\n\t Enter a string : ");
	fgets(str,20,stdin);
	b=isPalindrome(str);
	printf("\n%d",b);
	return 0;
}