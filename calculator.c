#include <stdio.h>
#include <math.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int a, b, choice;
    double result;

    // Menu loop until user exits
    do {
        // Display menu
        printf("\n======== Calculator ========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Factorial\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                if (b != 0)
                    printf("Result = %.2f\n", (float)a / b);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;

            case 5:
                printf("Enter base and exponent: ");
                scanf("%d %d", &a, &b);
                result = pow(a, b); // math.h function
                printf("Result = %.2f\n", result);
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%d", &a);
                if (a >= 0) {
                    result = sqrt(a); // math.h function
                    printf("Square root of %d is %.2f\n", a, result);
                } else {
                    printf("Error: Negative number cannot have a real square root.\n");
                }
                break;

            case 7:
                printf("Enter a number: ");
                scanf("%d", &a);
                if (a >= 0)
                    printf("Factorial of %d is %d\n", a, factorial(a));
                else
                    printf("Error: Factorial of negative number is not defined.\n");
                break;

            case 8:
                printf("Exiting the calculator. Thank you!\n");
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 8.\n");
        }

    } while (choice != 8);

    return 0;
}
