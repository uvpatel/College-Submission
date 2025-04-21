#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n) {
    if(n <= 1) return 0;
    if(n <= 3) return 1;
    
    // Check if n is divisible by 2 or 3
    if(n % 2 == 0 || n % 3 == 0) return 0;
    
    // Check for prime using 6k ± 1 optimization
    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    
    return 1;
}

// Function to find next prime number
int nextPrime(int n) {
    if(n <= 1) return 2;
    
    int prime = n;
    int found = 0;
    
    while(!found) {
        prime++;
        if(isPrime(prime)) {
            found = 1;
        }
    }
    
    return prime;
}

// Function to find previous prime number
int prevPrime(int n) {
    if(n <= 2) return -1;  // No prime number before 2
    
    int prime = n;
    int found = 0;
    
    while(!found && prime > 2) {
        prime--;
        if(isPrime(prime)) {
            found = 1;
        }
    }
    
    return found ? prime : -1;
}

// Function to print prime factors
void primeFactors(int n) {
    printf("Prime factors of %d: ", n);
    
    // Print 2s if present
    while(n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }
    
    // Print odd prime factors
    for(int i = 3; i <= sqrt(n); i += 2) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    
    // If n is still greater than 2, it's a prime number
    if(n > 2) {
        printf("%d", n);
    }
    printf("\n");
}

// Program 2: Prime Number Functions
int main() {
    int number;
    int choice;
    
    printf("Prime Number Functions\n");
    printf("====================\n");
    
    do {
        printf("\nOperations:\n");
        printf("1. Check if number is prime\n");
        printf("2. Find next prime number\n");
        printf("3. Find previous prime number\n");
        printf("4. Find prime factors\n");
        printf("5. Exit\n");
        
        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nPrime Number Check\n");
                printf("----------------\n");
                printf("Enter a number: ");
                scanf("%d", &number);
                
                if(isPrime(number)) {
                    printf("%d is a prime number.\n", number);
                } else {
                    printf("%d is not a prime number.\n", number);
                }
                break;
                
            case 2:
                printf("\nNext Prime Number\n");
                printf("---------------\n");
                printf("Enter a number: ");
                scanf("%d", &number);
                
                int next = nextPrime(number);
                printf("Next prime number after %d is %d\n", number, next);
                break;
                
            case 3:
                printf("\nPrevious Prime Number\n");
                printf("-------------------\n");
                printf("Enter a number: ");
                scanf("%d", &number);
                
                int prev = prevPrime(number);
                if(prev != -1) {
                    printf("Previous prime number before %d is %d\n", number, prev);
                } else {
                    printf("No prime number exists before %d\n", number);
                }
                break;
                
            case 4:
                printf("\nPrime Factorization\n");
                printf("-----------------\n");
                printf("Enter a number: ");
                scanf("%d", &number);
                
                if(number <= 0) {
                    printf("Please enter a positive number!\n");
                } else {
                    primeFactors(number);
                }
                break;
                
            case 5:
                printf("\nThank you for using Prime Number Functions!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        
    } while(choice != 5);
    
    return 0;
}
