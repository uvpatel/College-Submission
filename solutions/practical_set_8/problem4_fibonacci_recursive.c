#include <stdio.h>

// Function to calculate nth Fibonacci number recursively
int fibonacci(int n) {
    // Base cases
    if(n <= 1) {
        printf("fibonacci(%d) = %d\n", n, n);
        return n;
    }
    
    // Recursive case
    printf("Computing fibonacci(%d) = fibonacci(%d) + fibonacci(%d)\n", n, n-1, n-2);
    int result = fibonacci(n - 1) + fibonacci(n - 2);
    printf("fibonacci(%d) = %d\n", n, result);
    return result;
}

// Function to print Fibonacci series
void printFibonacciSeries(int n) {
    printf("\nFibonacci Series up to %d terms:\n", n);
    for(int i = 0; i < n; i++) {
        if(i > 0) printf(", ");
        printf("%d", fibonacci(i));
    }
    printf("\n");
}

// Program 4: Generate Fibonacci series using recursion
int main() {
    int terms;
    
    printf("Recursive Fibonacci Series Generator\n");
    printf("=================================\n");
    
    // Input number of terms
    printf("Enter number of terms (n): ");
    scanf("%d", &terms);
    
    // Validate input
    if(terms <= 0) {
        printf("Error: Number of terms should be positive!\n");
        return 1;
    }
    
    // Print series
    printf("\nGenerating Fibonacci series recursively:\n");
    printf("====================================\n");
    printFibonacciSeries(terms);
    
    // Print explanation
    printf("\nExplanation:\n");
    printf("- Fibonacci series starts with 0, 1\n");
    printf("- Each subsequent number is the sum of the previous two numbers\n");
    printf("- The sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...\n");
    
    return 0;
}
