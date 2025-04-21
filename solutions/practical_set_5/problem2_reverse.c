#include <stdio.h>

// Program 2: Reverse a number using while loop
int main() {
    int num, original;
    int reversed = 0;
    
    printf("Number Reversal Program\n");
    printf("=====================\n");
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    original = num;  // Store original number for comparison
    
    // Reverse the number using while loop
    printf("\nReversing process step by step:\n");
    while(num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        printf("Current digit: %d, Reversed so far: %d\n", digit, reversed);
        num /= 10;
    }
    
    // Display results
    printf("\nResults:\n");
    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);
    
    // Check if palindrome
    if(original == reversed) {
        printf("\nInteresting fact: This number is a palindrome!\n");
    }
    
    return 0;
}
