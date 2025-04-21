#include <stdio.h>

// Program 1: Calculate factorial using while loop
int main() {
    int num;
    int i = 1;
    unsigned long long factorial = 1;  // Using unsigned long long for larger numbers
    
    printf("Factorial Calculator\n");
    printf("===================\n");
    
    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Validate input
    if(num < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
        return 1;
    }
    
    // Special case for 0
    if(num == 0) {
        printf("0! = 1\n");
        return 0;
    }
    
    // Calculate factorial using while loop
    printf("\nCalculating %d! step by step:\n", num);
    while(i <= num) {
        printf("%d! = ", i);
        
        int j = 1;
        unsigned long long current_factorial = 1;
        while(j <= i) {
            printf("%d", j);
            if(j < i) printf(" × ");
            current_factorial *= j;
            j++;
        }
        printf(" = %llu\n", current_factorial);
        
        factorial *= i;
        i++;
    }
    
    // Display final result
    printf("\nFinal result:\n");
    printf("%d! = %llu\n", num, factorial);
    
    return 0;
}
