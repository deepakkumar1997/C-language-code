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
    printf("%.2f ",*++ptr);
    printf("%.2f ",*++ptr);
    printf("%.2f ",*--ptr);
    printf("%.2f ",*--ptr);
    printf("%.2f \n",*--ptr);

    printf("%.2f ",*++ptr*2);// *++ptr*2 means it first incrementing ptr and then multiply 2 in valuue.
    printf("%.2f",*ptr/5);
    printf(" %u ",ptr++);// it will increment the address containted by ptr by one block 
    // and now ptr pointing to next block
    printf("%.2f ",*(ptr));// pointer is pointing to second block thus it will print 2nd value
    printf("%.2f ",*(++ptr)); // now it is pointing to 3rd block
    //printf("%.2f",*(ptr*1)); // In address we can't multiply anything so why it is wrong
    return;
}