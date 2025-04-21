#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial(int n) {
    // Base cases
    if(n == 0 || n == 1) {
        printf("factorial(%d) = 1\n", n);
        return 1;
    }
    
    // Recursive case
    printf("Computing factorial(%d) = %d × factorial(%d)\n", n, n, n-1);
    unsigned long long result = n * factorial(n - 1);
    printf("factorial(%d) = %llu\n", n, result);
    return result;
}

// Program 3: Calculate factorial using recursion
int main() {
    int num;
    
    printf("Recursive Factorial Calculator\n");
    printf("============================\n");
    
    // Input number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    // Validate input
    if(num < 0) {
        printf("Error: Factorial is not defined for negative numbers!\n");
        return 1;
    }
    
    // Calculate and display factorial
    printf("\nCalculating %d! using recursion:\n", num);
    printf("==============================\n");
    unsigned long long result = factorial(num);
    
    printf("\nFinal Result:\n");
    printf("%d! = %llu\n", num, result);
    
    return 0;
}
