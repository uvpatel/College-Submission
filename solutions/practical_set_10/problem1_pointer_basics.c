#include <stdio.h>

// Program 1: Basic pointer demonstration
int main() {
    int number;
    int *ptr;
    
    printf("Pointer Demonstration\n");
    printf("===================\n");
    
    // Initialize variable
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Assign address to pointer
    ptr = &number;
    
    // Display results
    printf("\nVariable Analysis:\n");
    printf("================\n");
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void*)&number);
    
    printf("\nPointer Analysis:\n");
    printf("===============\n");
    printf("Value stored in pointer (address): %p\n", (void*)ptr);
    printf("Value pointed to by pointer: %d\n", *ptr);
    printf("Address of pointer itself: %p\n", (void*)&ptr);
    
    // Demonstrate pointer modification
    printf("\nModifying value through pointer:\n");
    printf("=============================\n");
    printf("Enter new value: ");
    scanf("%d", ptr);  // Using pointer to modify value
    
    printf("\nAfter modification:\n");
    printf("Value of number: %d\n", number);
    printf("Value pointed to by pointer: %d\n", *ptr);
    
    // Memory visualization
    printf("\nMemory Visualization:\n");
    printf("===================\n");
    printf("        +-------------------+\n");
    printf("number: | Value: %-10d|\n", number);
    printf("        | Address: %-9p|\n", (void*)&number);
    printf("        +-------------------+\n");
    printf("ptr:    | Value: %-10p|\n", (void*)ptr);
    printf("        | Address: %-9p|\n", (void*)&ptr);
    printf("        +-------------------+\n");
    
    return 0;
}
