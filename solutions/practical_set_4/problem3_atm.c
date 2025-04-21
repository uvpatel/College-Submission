#include <stdio.h>

#define CORRECT_PIN 1234
#define INITIAL_BALANCE 10000.0

// Program 3: ATM with two-step verification
int main() {
    int pin;
    float amount;
    int attempts = 3;
    
    printf("Welcome to ATM Service\n");
    printf("=====================\n");
    
    // Step 1: PIN Authentication
    while(attempts > 0) {
        printf("\nEnter your PIN: ");
        scanf("%d", &pin);
        
        if(pin == CORRECT_PIN) {
            printf("PIN authenticated successfully!\n\n");
            break;
        } else {
            attempts--;
            if(attempts > 0) {
                printf("Incorrect PIN. %d attempts remaining.\n", attempts);
            } else {
                printf("Account locked due to too many failed attempts.\n");
                printf("Please contact your bank.\n");
                return 1;
            }
        }
    }
    
    // Step 2: Balance Verification and Withdrawal
    if(attempts > 0) {  // Only proceed if PIN was correct
        printf("Your current balance: $%.2f\n", INITIAL_BALANCE);
        printf("Enter amount to withdraw: $");
        scanf("%f", &amount);
        
        if(amount <= 0) {
            printf("Error: Invalid amount\n");
        }
        else if(amount > INITIAL_BALANCE) {
            printf("Transaction declined: Insufficient balance\n");
            printf("You can withdraw up to $%.2f\n", INITIAL_BALANCE);
        }
        else {
            printf("\nTransaction successful!\n");
            printf("Amount withdrawn: $%.2f\n", amount);
            printf("Remaining balance: $%.2f\n", INITIAL_BALANCE - amount);
            printf("Please collect your cash\n");
        }
    }
    
    printf("\nThank you for using our ATM service!\n");
    return 0;
}
