// 35. Write a C program to print all prime numbers from 1 to N.
#include <stdio.h>

int main() {
    int n, i, j, prime;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        prime = 1;  // assume prime
        for (j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                prime = 0; // not prime
                break;
            }
        }
        if (prime == 1)
            printf("%d ", i);
    }
    return 0;
}
