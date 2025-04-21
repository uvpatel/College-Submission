#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    for(int i = 0; i < length/2; i++) {
        char temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp;
    }
}

// Function to convert string to uppercase
void toUpperCase(char *str) {
    while(*str) {
        *str = toupper(*str);
        str++;
    }
}

// Function to convert string to lowercase
void toLowerCase(char *str) {
    while(*str) {
        *str = tolower(*str);
        str++;
    }
}

// Function to count vowels and consonants
void countVC(char *str, int *vowels, int *consonants) {
    *vowels = 0;
    *consonants = 0;
    
    while(*str) {
        char ch = tolower(*str);
        if(isalpha(ch)) {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowels)++;
            } else {
                (*consonants)++;
            }
        }
        str++;
    }
}

// Function to check if string is palindrome
int isPalindrome(char *str) {
    int length = strlen(str);
    for(int i = 0; i < length/2; i++) {
        if(tolower(str[i]) != tolower(str[length-1-i])) {
            return 0;
        }
    }
    return 1;
}

// Program 3: String Functions
int main() {
    char str[100];
    int choice;
    
    printf("String Functions\n");
    printf("===============\n");
    
    do {
        printf("\nOperations:\n");
        printf("1. Reverse string\n");
        printf("2. Convert to uppercase\n");
        printf("3. Convert to lowercase\n");
        printf("4. Count vowels and consonants\n");
        printf("5. Check palindrome\n");
        printf("6. Exit\n");
        
        printf("\nEnter your choice (1-6): ");
        scanf("%d", &choice);
        getchar();  // Clear input buffer
        
        switch(choice) {
            case 1:
                printf("\nString Reversal\n");
                printf("--------------\n");
                printf("Enter a string: ");
                gets(str);
                
                printf("Original string: %s\n", str);
                reverseString(str);
                printf("Reversed string: %s\n", str);
                break;
                
            case 2:
                printf("\nUppercase Conversion\n");
                printf("-------------------\n");
                printf("Enter a string: ");
                gets(str);
                
                printf("Original string: %s\n", str);
                toUpperCase(str);
                printf("Uppercase string: %s\n", str);
                break;
                
            case 3:
                printf("\nLowercase Conversion\n");
                printf("-------------------\n");
                printf("Enter a string: ");
                gets(str);
                
                printf("Original string: %s\n", str);
                toLowerCase(str);
                printf("Lowercase string: %s\n", str);
                break;
                
            case 4:
                printf("\nVowel and Consonant Count\n");
                printf("-----------------------\n");
                printf("Enter a string: ");
                gets(str);
                
                int vowels, consonants;
                countVC(str, &vowels, &consonants);
                printf("Analysis:\n");
                printf("Vowels: %d\n", vowels);
                printf("Consonants: %d\n", consonants);
                break;
                
            case 5:
                printf("\nPalindrome Check\n");
                printf("---------------\n");
                printf("Enter a string: ");
                gets(str);
                
                if(isPalindrome(str)) {
                    printf("'%s' is a palindrome!\n", str);
                } else {
                    printf("'%s' is not a palindrome.\n", str);
                }
                break;
                
            case 6:
                printf("\nThank you for using String Functions!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        
    } while(choice != 6);
    
    return 0;
}
