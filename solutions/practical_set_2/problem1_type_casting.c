#include <stdio.h>

// Program 1: Type casting demonstration
int main() {
    // Float to Int casting
    float floatNum = 3.75;
    int intNum = (int)floatNum;
    printf("Float to Int casting:\n");
    printf("Original float: %f\n", floatNum);
    printf("After casting to int: %d\n\n", intNum);
    
    // Int to Float casting
    int number = 5;
    float floatVal = (float)number;
    printf("Int to Float casting:\n");
    printf("Original int: %d\n", number);
    printf("After casting to float: %f\n", floatVal);
    
    return 0;
}
