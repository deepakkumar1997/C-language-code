/* Enter a number and calculate square of that number by all possibel methods. */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double simpleSquare(double n){
    return n*n;
}

double powSquare(double n){
    return pow(n,2);
}

long int traditionalCsquare(int n){
    return n<<2;
}

/* Find the square of a number without using the multiplication and division operator. */
/* 
   Method - 1 :-> The idea is about that the square of any positive integer number 'n' can be
   calculated by adding first n natural odd numbers. 
   like :-
            1^2 = 1
            2^2 = (1 + 3) = 4
            3^2 = (1 + 3 + 5 = 9)
            4^2 = (1 + 3 + 5 + 7) = 16 
                                                                                            */
long int squareByOddNumLoop(int num){
    int odd=1;
    long int sum = 0;
    
    // Converting -ve integer to +ve
    num = abs(num);

    // Sum of odd nums till n-th time and decrement n by one.
    while(num--){
        sum += odd;
        odd+=2;
    }
    return sum;
}

/* In previous function we are calculating square if an integer number by adding first n natural
   odd numbers and we're calculating it through loop so it is too much time consuming and space
   as well so now I can optimize this code and we can use formula for calculating sum of first
   n odd numbers sum by a formula and we can return it. */
double squareBy1st_n_OddNums(int num){
    double square;
    int a = 1, d = 2, l = 2*num-1;
    // We all know that sum of n-odd numbers = n^2;
    // So we can also find square of an number by calculating sum of n-odd numbers
    /* So first n-odd numbers :
                               -> 1,3,5,7,9,11,.......,(2n-1)
    
        -> Different formulae for calculating sum of n-odd numbers.
        
            1 -> Sn = (n/2)*(a+l) where, a(first term) = 1, d(difference of 2 terms) = 2,
                                  l(Last term) = 2n-1, n = number of terms in AP
            2 -> Sn = (n/2)*(1+2n-1)

            3 -> Sn = (n/2)*(2n) = n^2
        -> We would have to also know that square root of an number-n represents number of terms 
        of an AP. e.g. -
                        sqrt(25) = 5 it means there is 5 odd terms have in AP which sum is 25.
                        like 1 + 3 + 5 + 7 + 9 = 25.
                                                                                        */
    square = (double)(num/2.)*(a+l);
    return square;
}

int main(int argc, char const *argv[])
{
    
    double n;
    printf("Enter a real number to cal square : ");
    scanf("%lf",&n);
    printf("Square of %.2lf is %.2lf\n",n,simpleSquare(n));
    printf("Square of %.2lf is %.2lf\n",n,powSquare(n));
    int num;
    printf("Enter an integer to find it's square : ");
    scanf("%d",&num);
    printf("Square by odd nums loop, sqrt(%d) is %ld\n",num,squareByOddNumLoop(num));
    printf("Sum of n-odd numbers = sqrt(%d) is %.2lf\n",num,squareBy1st_n_OddNums(num));
    printf("Left Shifting %d by 2 bits is %ld\n",num,traditionalCsquare(num));
    return 0;
}
