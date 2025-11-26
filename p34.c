// 34. Write a program of C to calculate sum of digit of input no.
#include <stdio.h>

int main() {
    int n, sum = 0, m;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        m = n % 10;      // last digit nikalo
        sum = sum + m;   // digit ko sum me add karo
        n = n / 10;        // last digit hatao
    } while (n > 0);

    printf("Sum of digits = %d", sum);

    return 0;
}
