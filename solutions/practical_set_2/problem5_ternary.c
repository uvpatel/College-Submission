#include <stdio.h>

// Program 5: Find maximum and minimum using ternary operator
int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Find maximum and minimum using ternary operator
    int max = (num1 > num2) ? num1 : num2;
    int min = (num1 < num2) ? num1 : num2;
    
    // Display results
    printf("\nBetween %d and %d:\n", num1, num2);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    
    return 0;
}
