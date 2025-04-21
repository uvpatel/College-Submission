#include <stdio.h>

// Function to calculate factorial recursively
unsigned long long factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to calculate sum of digits recursively
int sumOfDigits(int n) {
    if(n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}

// Function to calculate GCD recursively
int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate power recursively
long long power(int base, int exponent) {
    if(exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

// Program 6: Recursive Functions
int main() {
    int choice, n, m;
    
    printf("Recursive Functions\n");
    printf("==================\n");
    
    do {
        printf("\nOperations:\n");
        printf("1. Calculate Factorial\n");
        printf("2. Generate Fibonacci Series\n");
        printf("3. Calculate Sum of Digits\n");
        printf("4. Find GCD\n");
        printf("5. Calculate Power\n");
        printf("6. Exit\n");
        
        printf("\nEnter your choice (1-6): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nFactorial Calculation\n");
                printf("-------------------\n");
                printf("Enter a number: ");
                scanf("%d", &n);
                
                if(n < 0) {
                    printf("Error: Factorial not defined for negative numbers!\n");
                } else {
                    printf("%d! = %llu\n", n, factorial(n));
                }
                break;
                
            case 2:
                printf("\nFibonacci Series\n");
                printf("---------------\n");
                printf("Enter number of terms: ");
                scanf("%d", &n);
                
                if(n <= 0) {
                    printf("Error: Please enter a positive number!\n");
                } else {
                    printf("Fibonacci Series: ");
                    for(int i = 0; i < n; i++) {
                        printf("%d ", fibonacci(i));
                    }
                    printf("\n");
                }
                break;
                
            case 3:
                printf("\nSum of Digits\n");
                printf("-------------\n");
                printf("Enter a number: ");
                scanf("%d", &n);
                
                if(n < 0) {
                    printf("Error: Please enter a non-negative number!\n");
                } else {
                    printf("Sum of digits of %d is %d\n", n, sumOfDigits(n));
                }
                break;
                
            case 4:
                printf("\nGCD Calculation\n");
                printf("--------------\n");
                printf("Enter first number: ");
                scanf("%d", &n);
                printf("Enter second number: ");
                scanf("%d", &m);
                
                if(n < 0 || m < 0) {
                    printf("Error: Please enter non-negative numbers!\n");
                } else {
                    printf("GCD of %d and %d is %d\n", n, m, gcd(n, m));
                }
                break;
                
            case 5:
                printf("\nPower Calculation\n");
                printf("----------------\n");
                printf("Enter base: ");
                scanf("%d", &n);
                printf("Enter exponent: ");
                scanf("%d", &m);
                
                if(m < 0) {
                    printf("Error: Please enter a non-negative exponent!\n");
                } else {
                    printf("%d^%d = %lld\n", n, m, power(n, m));
                }
                break;
                
            case 6:
                printf("\nThank you for using Recursive Functions!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        
    } while(choice != 6);
    
    return 0;
}
