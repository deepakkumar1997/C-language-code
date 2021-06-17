#include<stdio.h>
#include"funcTriangle.c"

int main(){
    int length,breadth,side_a,side_b,side_c;
    float area,perimeter;
    printf("Enter length of triangle : ");
    scanf("%d",&length);
    printf("Enter breadth of triangle : ");
    scanf("%d",&breadth);
    area = areaofTriangle(length,breadth);
    printf("\nArea of Triangle : %.2f\n",area);
    printf("Enter value of side a : ");
    scanf("%d",&side_a);
    printf("Enter value of side b : ");
    scanf("%d",&side_b);
    printf("Enter value of side c : ");
    scanf("%d",&side_c);
    perimeter = perimeterofTriangle(side_a,side_b,side_c);
    printf("\nPerimeter of Triangle : %.2f\n",perimeter);
    return 0;
}