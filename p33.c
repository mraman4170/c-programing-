// 33. Write a program of C check the input no. is prime or not.
#include <stdio.h>

int main() {
    int n, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // do-while loop to check divisibility
    do {
        if (n % i == 0) {
            flag = 1;   // divisible mila
            break;      // loop se bahar niklo
        }
        i++;
    } while (i <= n / 2);

    if (n == 1)
        printf("1 is not a prime number");
    else if (flag == 0)
        printf("%d is a Prime number", n);
    else
        printf("%d is Not a Prime number", n);

    return 0;
}

