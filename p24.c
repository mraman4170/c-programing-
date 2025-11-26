//  Write a C program to design calculator with basic operations using switch.
#include <stdio.h>

int main() {
    int choice;
    int number1, number2, total;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    printf("\nCalculator Menu\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            total = number1 + number2;
            printf("Result: %d\n", total);
            break;
        case 2:
            total = number1 - number2;
            printf("Result: %d\n", total);
            break;
        case 3:
            total = number1 * number2;
            printf("Result: %d\n", total);
            break;
        case 4:
            if (number2 != 0)
                printf("Result: %d\n", number1 / number2);
            else
                printf("Error: Division by zero not allowed.\n");
            break;
        default:
            printf("Invalid choice! Please enter 1-4.\n");
    }

    return 0;
}