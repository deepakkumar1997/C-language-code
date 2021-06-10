#include <stdio.h>

int main() {
    //If we initialize more value then the size of an array then it wiil give warning likw
    // excess elements in an array initializer and it will print an garbage value
    int x[5] = {20, 45, 16, 18, 22, 5};
    //it is fine it will not give any warning and you can initialize an value like this
    x[9] = 260;
    printf("The elements at index array[5] is %d & at index[9] is %d\n", x[5],x[9]); 
    return 0;
}