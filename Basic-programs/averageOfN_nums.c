/* Take n numbers from user and find their average. */

#include<stdio.h>

float average(int n, float *arr){
    
    float avg=0;
    for(int i=0; i<n; i++){
        avg+=*(arr+i);
    }
    return avg/n;
}

void display(float average, float *arr, int n){
    printf("\nAverage of { ");
    for(int i=0; i<n; i++)
    printf("%.2f, ",*(arr+i));
    printf("\b\b } is %.3f\n\n",average);
}

int main(int argc, char const *argv[])
{
    
    int n;
    printf("How many numbers do you want to enter : ");
    scanf("%d",&n);
    float arr[n];
    for(int i=0; i<n; i++){
        printf("Enter value of number %d : ",i+1);
        scanf("%f",&arr[i]);
    }
    float *array = arr;
    float avg = average(n,array);
    display(avg, array, n);
    return 0;
}