#include <stdio.h>
#include <math.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float power(float base, float exponent);
float square_root(float number);

// Implementation of calculator functions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if(b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

float power(float base, float exponent) {
    return pow(base, exponent);
}

float square_root(float number) {
    if(number >= 0) {
        return sqrt(number);
    } else {
        printf("Error: Cannot calculate square root of negative number!\n");
        return 0;
    }
}

// Program 1: Scientific Calculator using Functions
int main() {
    float num1, num2;
    int choice;
    float result;
    
    printf("Scientific Calculator\n");
    printf("===================\n");
    
    do {
        printf("\nOperations:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");
        
        printf("\nEnter your choice (1-7): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nAddition\n");
                printf("--------\n");
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = add(num1, num2);
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 2:
                printf("\nSubtraction\n");
                printf("-----------\n");
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = subtract(num1, num2);
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 3:
                printf("\nMultiplication\n");
                printf("-------------\n");
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = multiply(num1, num2);
                printf("%.2f × %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 4:
                printf("\nDivision\n");
                printf("--------\n");
                printf("Enter first number: ");
                scanf("%f", &num1);
                printf("Enter second number: ");
                scanf("%f", &num2);
                result = divide(num1, num2);
                if(num2 != 0) {
                    printf("%.2f ÷ %.2f = %.2f\n", num1, num2, result);
                }
                break;
                
            case 5:
                printf("\nPower\n");
                printf("-----\n");
                printf("Enter base: ");
                scanf("%f", &num1);
                printf("Enter exponent: ");
                scanf("%f", &num2);
                result = power(num1, num2);
                printf("%.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 6:
                printf("\nSquare Root\n");
                printf("-----------\n");
                printf("Enter number: ");
                scanf("%f", &num1);
                result = square_root(num1);
                if(num1 >= 0) {
                    printf("√%.2f = %.2f\n", num1, result);
                }
                break;
                
            case 7:
                printf("\nThank you for using the calculator!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        
    } while(choice != 7);
    
    return 0;
}
