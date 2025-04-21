#include <stdio.h>

// Program 6: Multiply and divide by 2 using bitwise operators
int main() {
    int number;
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Multiply by 2 using left shift (<<)
    int multiplied = number << 1;
    
    // Divide by 2 using right shift (>>)
    int divided = number >> 1;
    
    // Display results
    printf("\nResults for number %d:\n", number);
    printf("Multiplied by 2 (using <<): %d\n", multiplied);
    printf("Divided by 2 (using >>): %d\n", divided);
    
    return 0;
}
