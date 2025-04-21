#include <stdio.h>
#include <string.h>

#define CORRECT_PASSWORD "secure123"
#define MAX_ATTEMPTS 3

// Program 4: Password authentication system using goto
int main() {
    char password[20];
    int attempts = 0;
    
    printf("Password Authentication System\n");
    printf("============================\n");

try_again:
    // Check if max attempts reached
    if(attempts >= MAX_ATTEMPTS) {
        printf("\nAccount locked: Too many failed attempts.\n");
        printf("Please contact administrator for support.\n");
        return 1;
    }
    
    // Get password
    printf("\nEnter password (attempt %d of %d): ", attempts + 1, MAX_ATTEMPTS);
    scanf("%s", password);
    
    // Check password
    if(strcmp(password, CORRECT_PASSWORD) != 0) {
        attempts++;
        printf("Incorrect password!\n");
        goto try_again;
    }
    
    // Password correct
    printf("\nAccess granted! Welcome to the system.\n");
    
    return 0;
}
