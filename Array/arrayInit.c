//An array can be partially initialized, as in: int arr[5] = { 1, [4]{5}, [2]{3} }; 
//after that, the value of: arr[0] is 1, arr[1] is 0 arr[2] is 3 arr[3] is 0 arr[4] is 5
#include<stdio.h>
int main()
{
    //Partially initialized array here I'm storing 1 at index~0 and then
    //-- [4]{5}~it means 5 stored at index 4 and like that
    int arr[5] = {1, [4]{5},[2]{3}};
    for(int i=0;i<5;i++)
    printf("Array[%d] = %d\n",i,arr[i]);
    return 0;
}