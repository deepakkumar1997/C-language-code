// Take an string as a input from user and print all permutations of it.

#include<stdio.h>
#include<string.h>

int permutationOfAstring(char str[]){
    int all_possible_value_of_string = 1;         
    for(int i=1; i<=strlen(str); ++i)
        all_possible_value_of_string *= i;
    
    

    return all_possible_value_of_string;
}

int main(int argc, char const *argv[])
{
    
    char str[10];
    printf("Enter a string : ");
    scanf("%s",str);
    int perm = permutationOfAstring(str);
    printf("Permutation of %s is %d\n",str,perm);
    return 0;
}
