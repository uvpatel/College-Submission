#include <stdio.h>

// Function to find maximum of three numbers
int findMaximum(int a, int b, int c) {
    int max = a;  // Assume first number is maximum
    
    // Compare with second number
    if(b > max) {
        max = b;
    }
    
    // Compare with third number
    if(c > max) {
        max = c;
    }
    
    return max;
}

// Program 1: Find maximum of three numbers using function
int main() {
    int num1, num2, num3;
    
    printf("Maximum Number Finder\n");
    printf("===================\n");
    
    // Input three numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);
    
    // Find and display maximum using function
    int maximum = findMaximum(num1, num2, num3);
    
    // Display process and result
    printf("\nComparison Process:\n");
    printf("1. First number: %d\n", num1);
    printf("2. Second number: %d\n", num2);
    printf("3. Third number: %d\n", num3);
    printf("\nThe maximum number is: %d\n", maximum);
    
    // Show which number(s) is/are maximum
    printf("\nAnalysis:\n");
    if(num1 == maximum) printf("- First number (%d) is maximum\n", num1);
    if(num2 == maximum) printf("- Second number (%d) is maximum\n", num2);
    if(num3 == maximum) printf("- Third number (%d) is maximum\n", num3);
    
    return 0;
}
