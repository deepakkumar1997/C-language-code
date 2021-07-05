// Create a matrix and do all operation on it using pointer.

#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    int arr[3][3] = {6,2,5,0,1,3,4,9,8};
    //int *p = arr;//This will give warning but still you can do this.
    int *ptr = arr[0];// Now it is fine and legal as well

    printf("%d",*ptr+1);
    printf(" %d ",*(ptr+1));
    printf("%d ",*(ptr+3));
    printf("%d\n",*(ptr+1)+1);

    printf("arr[0] : %u, arr[1] : %u, arr[2] : %u\n",arr[0],arr[1],arr[2]);
    printf("arr[0] : %d, arr[1] : %d, arr[2] : %d\n",*arr[0],*arr[1],*arr[2]);
    printf("arr[0] : %d, arr[1] : %d, arr[2] : %d\n",arr[0][0],arr[1][0],arr[2][0]);
    printf("arr[0] : %d, arr[1] : %d, arr[2] : %d\n",*arr[0]+1,*arr[1]+1,*arr[2]+1);
    printf("*(arr[0]+1) : %d, *(arr[1]+1) : %d, *(arr[2]+1) : %d\n",*(arr[0]+1),*(arr[1]+1),*(arr[2]+1));
    //printf("arr[0] : %d, arr[1] : %d, arr[2] : %d\n",(*ptr+1),*ptr,*ptr);
    return 0;
}
