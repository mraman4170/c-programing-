// 38. Write a program to print a given output
#include <stdio.h>

int main() {
    int A, a;
    for (A = 1; A <= 5; A++) {
        for (a = 1; a <= A; a++) {
            printf("%d", a);
        }
        printf("\n");
    }
    return 0;
}
