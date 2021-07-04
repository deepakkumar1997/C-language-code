// Playing with pointer in 1D array

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    char name[] = "DEEPAK PANDEY";
    char *ptr = name;// Pointer to char variable 'name'
    printf("%c\n",*name);// It is pointing to first character of array name[]. but if you pass to
    // format specifier '%s' then it will get error segmentation fault core dumped because '%s'
    // takes address of type char * but it will give of type int address and that is the error
    printf("%s\n",name);
    printf("%s\n",*(&name));// With address of operator dereferencing operator(*) will get base 
    // address of array name[] with name;
    printf("name[0] :- %c\n",name[0]);
    printf("*name :- %c\n",*name);
    printf("*ptr :- %c\n",*ptr);
    printf("0[name] :- %c\n",0[name]);// name[0] = 0[name] both are same
    printf("\nname[7] :- %c\n",name[7]);
    printf("7[name] :- %c\n",7[name]);
    printf("*(name+7) :- %c\n",*(name+7));
    printf("*(*(&name)+7) :- %c\n",*(*(&name)+7));
    printf("*(ptr+7) :- %c\n",*(ptr+7));
    printf("7[ptr] :- %c\n",7[ptr]);
    printf("*(++ptr) :- %c\n",*++ptr);// It will print E because pointer ptr currently pointing
    // to base elenemt D but now ot is pointing to E if you now print *ptr it will print 'E'
    printf("*ptr : %c, *name : %c\n",*ptr, *name);// *name can't be incremented as per C rule
    return 0;
}
