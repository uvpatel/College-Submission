#include <stdio.h>
#include <math.h>

// Program 1: Polynomial evaluation (3x^3 + 2x^2 - 5x + 1)
int main() {
    float x;
    float result;
    
    // Input value of x
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    // Calculate polynomial: 3x^3 + 2x^2 - 5x + 1
    result = 3 * pow(x, 3) + 2 * pow(x, 2) - 5 * x + 1;
    
    // Display result
    printf("For x = %.2f:\n", x);
    printf("3x^3 + 2x^2 - 5x + 1 = %.2f\n", result);
    
    // Show step by step calculation
    printf("\nStep by step calculation:\n");
    printf("3x^3 = 3 * (%.2f)^3 = %.2f\n", x, 3 * pow(x, 3));
    printf("2x^2 = 2 * (%.2f)^2 = %.2f\n", x, 2 * pow(x, 2));
    printf("-5x = -5 * %.2f = %.2f\n", x, -5 * x);
    printf("Constant term = 1\n");
    
    return 0;
}
