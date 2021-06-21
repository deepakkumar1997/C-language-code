#include<stdio.h>

int main(int argc, char *argv[]){

    // argc means argument counter it is an variable so we can change this name
    // argv means argument variable these name taken as this is meaningful to thier operations

    for(int i=0;i<argc;i++)
    printf("Argument %d -> %s\n",i+1,argv[i]);
    return 0;
}