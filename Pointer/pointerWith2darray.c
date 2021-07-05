// Create a matrix and do all operation on it using pointer.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int arr[3][3] = {6,2,5,0,1,3,4,9,8};
    //int *p = arr;//This will give warning but still you can do this.
    int *ptr = arr[0];// Now it is fine and legal as well

    printf("%d %d %d %d %d %d\n",ptr,arr,&arr[0][0],arr[0],*arr,&arr);
    printf("%d %d %d\n",ptr[0],1[ptr],&ptr[0]);
    printf("%d %d %d \n",arr+1, &arr[0],ptr+2);
    printf("%d %d %d %d %d\n",*(arr+1),arr[1],&arr[1][0],*arr[1],*(*(arr+1)));
    printf("%d %d\n",*(*(arr+1)+2),*(arr[1]+2));
    printf("a[0][0] : %d  *(a[0]+0) : %d *(*(a+0)+0) : %d\n",arr[0][0],*(arr[0]+0),*(*(arr+0)+0));
    printf("It means a[0][0] = *(a[0]+0) = *(*(a+0)+0) = **arr = %d\n",**arr);
    printf("%d %d %d %d\n",*ptr,arr[1]+1,&arr[1]+1,*(*(&arr[1]+1)));//**ptr is invalid because *ptr itself pointing
    // towards value at base address if we do double pointer then it doesn't make any sense

    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            //printf("%d ",arr[i][j]);
            //printf("%d ",*(arr[i]+j));
            //printf("%d ",*(*(arr+i)+j));
            //printf("%d ",**(arr+j));// **arr == *ptr == ptr[0]
            printf("%d ",*(arr[i]+j));
          }
        printf("\n");
    }
    for (int i = 0; i < 3*3; ++i)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    
    return 0;
}
