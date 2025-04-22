#include <stdio.h>

int main(){
    int PIN,Amount = 10000;
    printf("Enter your Real PIN: ");
    scanf("%d", &PIN);

    int entered_PIN;
    printf("Enter your PIN: ");
    scanf("%d", &entered_PIN);

    if (PIN == entered_PIN) {
        printf("PIN is correct.\n");
        printf("Your account balance is: %d\n", Amount);
        int withdraw_amount;
        printf("Enter the amount you want to withdraw: ");
        scanf("%d", &withdraw_amount);
        if (Amount >= withdraw_amount) {
            
            printf("Withdrawal successful.\n");
            Amount -= withdraw_amount;
            printf("Withdrawal successful. New balance: %d\n", Amount);
        } else {
            printf("Insufficient funds.\n");
        }
        
        
    } else {
        printf("PIN is incorrect.\n");
    }
    printf("You can access your account.\n");
    return 0;
}