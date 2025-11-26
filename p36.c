// 36. Write a program to print the given output
#include <stdio.h>

int main() {
    int X, Y;
    for (X = 1; X <= 5; X++) {
        for (Y = 1; Y <= X; Y++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
