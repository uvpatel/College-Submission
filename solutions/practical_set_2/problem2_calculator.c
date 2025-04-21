#include <stdio.h>

// Program 2: Basic calculator operations
int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Perform and display calculations
    printf("\nCalculations for %d and %d:\n", num1, num2);
    printf("Addition: %d\n", num1 + num2);
    printf("Subtraction: %d\n", num1 - num2);
    printf("Multiplication: %d\n", num1 * num2);
    
    // Check for division by zero
    if(num2 != 0) {
        printf("Division: %.2f\n", (float)num1 / num2);
        printf("Modulo: %d\n", num1 % num2);
    } else {
        printf("Division and Modulo: Cannot divide by zero!\n");
    }
    
    return 0;
}
