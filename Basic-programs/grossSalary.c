/* Input basic salary and calculate gross salary. */

#include<stdio.h>

double grossSalary(double basicSalary){
    float ta;// Travelling Allowance
    double da;// Dearness Allowance
    if(basicSalary>=15000){
        ta = basicSalary*20./100;
        da = ta*3;
        return basicSalary + ta + da;
    }
    else if(basicSalary < 15000 && basicSalary >=10000){
        ta = basicSalary*15./100;
        da = basicSalary*70./100;
        return basicSalary + ta + da;
    }
    else{
        ta = basicSalary*14.0/100;
        da = basicSalary*80./100;
        return basicSalary + ta + da;
    }
}

int main(int argc, char const *argv[])
{
    
    double salary;
    printf("Input your basic salary : ");
    scanf("%lf",&salary);
    printf("Your gross salary is %.2lf\n",grossSalary(salary));
    return 0;
}