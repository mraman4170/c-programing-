/* Write a program of C++ to input basic salary and then calculate income tax as per given Condition.
_____________________________
|  Basic salary  | IncomeTax| 
|     <5000      |    0%    |
|  >=5000&<7000  |    3%    |
|  >=7000&<10000 |    4%    |
|     >=10000    |    5%    |
-----------------------------    */
#include <stdio.h>
int main(){
    float basicSalary, incomeTax = 0;
    
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    
    if (basicSalary < 5000) {
        incomeTax = 0;
    }
    else if (basicSalary >= 5000 && basicSalary < 7000) {
        incomeTax = basicSalary * 0.03;
    }
    else if (basicSalary >= 7000 && basicSalary < 10000) {
        incomeTax = basicSalary * 0.04;
    }
    else {
        incomeTax = basicSalary * 0.05;
    }
    
    printf("Income Tax = %.2f\n", incomeTax);
    return 0;
}