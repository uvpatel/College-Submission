#include <stdio.h>

// Function to calculate product using pointers
void calculateProduct(int *num1, int *num2, long long *result) {
    *result = (*num1) * (*num2);
}

// Program 2: Calculate product using pointers
int main() {
    int number1, number2;
    long long product;
    
    printf("Product Calculator using Pointers\n");
    printf("===============================\n");
    
    // Input first number
    printf("Enter first number: ");
    scanf("%d", &number1);
    
    // Input second number
    printf("Enter second number: ");
    scanf("%d", &number2);
    
    // Calculate product using pointers
    calculateProduct(&number1, &number2, &product);
    
    // Display process
    printf("\nCalculation Process:\n");
    printf("==================\n");
    printf("1. First number address: %p, value: %d\n", 
           (void*)&number1, number1);
    printf("2. Second number address: %p, value: %d\n", 
           (void*)&number2, number2);
    printf("3. Product stored at: %p\n", 
           (void*)&product);
    
    // Display result
    printf("\nResult:\n");
    printf("=======\n");
    printf("%d × %d = %lld\n", number1, number2, product);
    
    // Memory visualization
    printf("\nMemory Visualization:\n");
    printf("===================\n");
    printf("        +-------------------+\n");
    printf("num1:   | Value: %-10d|\n", number1);
    printf("        | Address: %-9p|\n", (void*)&number1);
    printf("        +-------------------+\n");
    printf("num2:   | Value: %-10d|\n", number2);
    printf("        | Address: %-9p|\n", (void*)&number2);
    printf("        +-------------------+\n");
    printf("product:| Value: %-10lld|\n", product);
    printf("        | Address: %-9p|\n", (void*)&product);
    printf("        +-------------------+\n");
    
    return 0;
}
