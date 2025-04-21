#include <stdio.h>

#define MAX_SIZE 100

// Program 1: Basic array operations
int main() {
    int arr[MAX_SIZE];
    int size, i;
    int sum = 0;
    float average;
    int max, min;
    
    printf("Array Operations\n");
    printf("===============\n");
    
    // Input array size
    printf("Enter the size of array (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    
    if(size <= 0 || size > MAX_SIZE) {
        printf("Invalid array size!\n");
        return 1;
    }
    
    // Input array elements
    printf("\nEnter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        
        // For first element, initialize max and min
        if(i == 0) {
            max = min = arr[0];
        }
        
        // Update sum, max, and min
        sum += arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    
    // Calculate average
    average = (float)sum / size;
    
    // Display results
    printf("\nArray Analysis:\n");
    printf("==============\n");
    
    // Display array
    printf("Array elements: ");
    for(i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if(i < size - 1) printf(", ");
    }
    printf("\n\n");
    
    // Display statistics
    printf("Statistics:\n");
    printf("- Sum: %d\n", sum);
    printf("- Average: %.2f\n", average);
    printf("- Maximum: %d\n", max);
    printf("- Minimum: %d\n", min);
    
    // Count elements above and below average
    int above_avg = 0, below_avg = 0;
    for(i = 0; i < size; i++) {
        if(arr[i] > average) above_avg++;
        else if(arr[i] < average) below_avg++;
    }
    
    printf("\nDistribution:\n");
    printf("- Elements above average: %d\n", above_avg);
    printf("- Elements below average: %d\n", below_avg);
    printf("- Elements equal to average: %d\n", size - above_avg - below_avg);
    
    return 0;
}
