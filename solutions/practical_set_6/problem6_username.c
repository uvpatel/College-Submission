#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 50

// Function to convert string to lowercase
void toLowerCase(char *str) {
    for(int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// Program 6: Case-insensitive username comparison
int main() {
    char stored_username[MAX_LENGTH] = "JohnDoe123";  // Stored username
    char input_username[MAX_LENGTH];
    
    printf("Username Verification System\n");
    printf("==========================\n");
    
    // Display stored username
    printf("Registered username: %s\n", stored_username);
    
    // Get input username
    printf("Enter your username: ");
    scanf("%s", input_username);
    
    // Create copies for case-insensitive comparison
    char stored_lower[MAX_LENGTH];
    char input_lower[MAX_LENGTH];
    
    strcpy(stored_lower, stored_username);
    strcpy(input_lower, input_username);
    
    // Convert both to lowercase
    toLowerCase(stored_lower);
    toLowerCase(input_lower);
    
    // Compare and display result
    printf("\nComparison Results:\n");
    printf("==================\n");
    printf("Entered username: %s\n", input_username);
    printf("Case-sensitive comparison: %s\n", 
           strcmp(stored_username, input_username) == 0 ? "Match" : "No match");
    printf("Case-insensitive comparison: %s\n", 
           strcmp(stored_lower, input_lower) == 0 ? "Match" : "No match");
    
    return 0;
}
