/* Enter a number and calculate square of that number by all possibel methods. */

#include<stdio.h>
#include<math.h>

double simpleSquare(double n){
    return n*n;
}

double powSquare(double n){
    return pow(n,2);
}

double traditionalCsquare(double n){
    return (int)n<<2;
}

int main(int argc, char const *argv[])
{
    
    double n;
    printf("Enter a number to cal square : ");
    scanf("%lf",&n);
    printf("Square of %.2lf is %.2lf\n",n,simpleSquare(n));
    printf("Square of %.2lf is %.2lf\n",n,powSquare(n));
    printf("Square of %.2lf is %.2lf\n",n,traditionalCsquare(n));
    return 0;
}
