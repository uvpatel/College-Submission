#include <stdio.h>
#include <stdbool.h>

// Program 3: Demonstrate sizeof with various data types
int main() {
    // Declare variables of different types
    int intVar;
    char charVar;
    float floatVar;
    bool boolVar;
    double doubleVar;
    long longVar;
    short shortVar;
    
    // Print size of each data type
    printf("Size of different data types:\n");
    printf("================================\n");
    printf("int: %zu bytes\n", sizeof(intVar));
    printf("char: %zu bytes\n", sizeof(charVar));
    printf("float: %zu bytes\n", sizeof(floatVar));
    printf("bool: %zu bytes\n", sizeof(boolVar));
    printf("double: %zu bytes\n", sizeof(doubleVar));
    printf("long: %zu bytes\n", sizeof(longVar));
    printf("short: %zu bytes\n", sizeof(shortVar));
    
    // Also demonstrate sizeof with literals and expressions
    printf("\nSize of literals and expressions:\n");
    printf("================================\n");
    printf("Size of 42: %zu bytes\n", sizeof(42));
    printf("Size of 3.14: %zu bytes\n", sizeof(3.14));
    printf("Size of 'A': %zu bytes\n", sizeof('A'));
    
    return 0;
}
