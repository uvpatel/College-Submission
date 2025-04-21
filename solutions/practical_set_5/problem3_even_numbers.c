#include <stdio.h>

// Program 3: Print even numbers in a given range
int main() {
    int start, end;
    int count = 0;
    
    printf("Even Numbers in Range\n");
    printf("===================\n");
    
    // Input range
    printf("Enter start number: ");
    scanf("%d", &start);
    printf("Enter end number: ");
    scanf("%d", &end);
    
    // Validate range
    if(start > end) {
        printf("Error: Start number should be less than end number.\n");
        return 1;
    }
    
    // Adjust start to first even number if it's odd
    if(start % 2 != 0) {
        start++;
    }
    
    // Print even numbers
    printf("\nEven numbers between %d and %d are:\n", start, end);
    int i = start;
    while(i <= end) {
        printf("%d", i);
        count++;
        
        // Format output (5 numbers per line)
        if(i + 2 <= end) {
            printf(", ");
            if(count % 5 == 0) {
                printf("\n");
            }
        }
        
        i += 2;  // Move to next even number
    }
    
    // Print summary
    printf("\n\nTotal even numbers found: %d\n", count);
    
    return 0;
}
