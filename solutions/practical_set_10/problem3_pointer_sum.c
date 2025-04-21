#include <stdio.h>

// Program 3: Calculate sum of n numbers using pointers
int main() {
    int n;
    int *numbers;
    int sum = 0;
    
    printf("Sum Calculator using Pointers\n");
    printf("===========================\n");
    
    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Error: Please enter a positive number!\n");
        return 1;
    }
    
    // Dynamically allocate array
    numbers = (int*)malloc(n * sizeof(int));
    if(numbers == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }
    
    // Input numbers using pointer arithmetic
    printf("\nEnter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", numbers + i);  // Using pointer arithmetic
    }
    
    // Calculate sum using pointer arithmetic
    int *ptr = numbers;
    printf("\nCalculation Process:\n");
    printf("==================\n");
    for(int i = 0; i < n; i++) {
        printf("Adding %d (address: %p)\n", *ptr, (void*)ptr);
        sum += *ptr;
        ptr++;  // Move pointer to next element
    }
    
    // Display array using pointer notation
    printf("\nArray Contents:\n");
    printf("==============\n");
    printf("Index\tValue\t\tAddress\n");
    printf("--------------------------------\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%p\n", i, *(numbers + i), (void*)(numbers + i));
    }
    
    // Display sum
    printf("\nResult:\n");
    printf("=======\n");
    printf("Sum of all numbers: %d\n", sum);
    
    // Memory visualization
    printf("\nMemory Layout:\n");
    printf("=============\n");
    printf("Start address: %p\n", (void*)numbers);
    printf("End address: %p\n", (void*)(numbers + n - 1));
    printf("Total bytes: %zu\n", n * sizeof(int));
    
    // Free allocated memory
    free(numbers);
    printf("\nMemory has been freed successfully!\n");
    
    return 0;
}
