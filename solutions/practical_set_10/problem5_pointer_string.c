#include <stdio.h>
#include <string.h>

// Function to calculate string length using pointers
int stringLength(char *str) {
    char *ptr = str;
    while(*ptr != '\0') ptr++;
    return ptr - str;
}

// Function to copy string using pointers
void stringCopy(char *dest, char *src) {
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Add null terminator
}

// Function to concatenate strings using pointers
void stringConcat(char *str1, char *str2) {
    while(*str1 != '\0') str1++;  // Move to end of first string
    while(*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';  // Add null terminator
}

// Function to reverse string using pointers
void stringReverse(char *str) {
    char *start = str;
    char *end = str + stringLength(str) - 1;
    
    while(start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

// Program 5: String operations using pointers
int main() {
    char str1[100], str2[100], result[200];
    
    printf("String Operations using Pointers\n");
    printf("==============================\n");
    
    // Input first string
    printf("Enter first string: ");
    gets(str1);
    
    // Input second string
    printf("Enter second string: ");
    gets(str2);
    
    // String analysis
    printf("\nString Analysis:\n");
    printf("===============\n");
    
    // Length calculation
    printf("Length of first string: %d\n", stringLength(str1));
    printf("Length of second string: %d\n", stringLength(str2));
    
    // String copy
    printf("\nString Copy Operation:\n");
    printf("====================\n");
    stringCopy(result, str1);
    printf("Copied string: %s\n", result);
    
    // String concatenation
    printf("\nString Concatenation:\n");
    printf("===================\n");
    stringCopy(result, str1);
    stringConcat(result, str2);
    printf("Concatenated string: %s\n", result);
    
    // String reverse
    printf("\nString Reverse Operation:\n");
    printf("=======================\n");
    printf("Original first string: %s\n", str1);
    stringReverse(str1);
    printf("Reversed first string: %s\n", str1);
    
    // Memory visualization
    printf("\nMemory Visualization:\n");
    printf("===================\n");
    printf("String 1:\n");
    for(int i = 0; str1[i] != '\0'; i++) {
        printf("Address: %p, Character: %c\n", 
               (void*)&str1[i], str1[i]);
    }
    
    printf("\nString 2:\n");
    for(int i = 0; str2[i] != '\0'; i++) {
        printf("Address: %p, Character: %c\n", 
               (void*)&str2[i], str2[i]);
    }
    
    return 0;
}
