/* C program to remove spaces from a string */
#include<stdio.h>

void remove_white_spaces(char *str)
{
	int i = 0, j = 0;
	while (str[i])
	{
		if (str[i] != ' ')
          str[j++] = str[i];
		i++;
	}
	str[j] = '\0';
	puts(str);
}

int main()
{
	char str[50];
    printf("\n\t Enter a string : ");
	fgets(str,20,stdin);
	remove_white_spaces(str);
	//printf("\n%s",str);
	return 0;
}