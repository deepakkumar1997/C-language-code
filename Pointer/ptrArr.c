// Take an array of elements from user and print it with pointer.

#include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("How many subject you have : ");
    scanf("%d",&n);
    float *marks = (float*)malloc(n*sizeof(float));
    float *ptr = marks;
    for(int i=0; i<n; ++i){
        printf("Input final marks of sub %d : ",i+1);
        //scanf("%f",&marks[i]);
        //scanf("%f",(marks+i));
        //scanf("%f",&i[marks]);
        //scanf("%f",&ptr[i]);
        //scanf("%f",(ptr+i));
        scanf("%f",&i[ptr]);
    }
    for(int i=0; i<n; ++i){
        printf("%.2f ",*(marks+i));
        printf("%.2f ",i[marks]);
        printf("%.2f ",marks[i]);
        printf("%.2f ",*(ptr+i));
        printf("%.2f ",i[ptr]);
        printf("%.2f \n",ptr[i]);
    }
    return;
}