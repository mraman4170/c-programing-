// 27. Write a program of C to print all even no. from 2 to 100.

#include <stdio.h>

int main() {
    int i = 2;  // start from 2

    while(i <=100) {
        printf("%d ", i);
        i += 2;  // increment by 2 to get next even number
    }

    printf("\n");
    return 0;
}
