#include <stdio.h>

// Program 5: Swap two numbers using a third variable
int main() {
    int num1, num2, temp;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Display original values
    printf("\nBefore swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    // Swap numbers using third variable
    temp = num1;
    num1 = num2;
    num2 = temp;
    
    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    
    return 0;
}
