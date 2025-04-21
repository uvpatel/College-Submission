#include <stdio.h>

// Function to print array using pointer
void printArray(int *arr, int size) {
    printf("\nArray elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

// Function to reverse array using pointers
void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    
    printf("\nReversing Process:\n");
    printf("================\n");
    
    while(start < end) {
        printf("Swapping %d (at %p) with %d (at %p)\n",
               *start, (void*)start, *end, (void*)end);
        
        // Swap elements using pointers
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

// Program 4: Array operations using pointers
int main() {
    int size;
    
    printf("Array Operations using Pointers\n");
    printf("=============================\n");
    
    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    if(size <= 0) {
        printf("Error: Please enter a positive size!\n");
        return 1;
    }
    
    // Declare array
    int arr[size];
    
    // Input array elements
    printf("\nEnter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", arr + i);  // Using pointer arithmetic
    }
    
    // Display original array
    printf("\nOriginal Array:\n");
    printf("==============\n");
    printf("Index\tValue\t\tAddress\n");
    printf("--------------------------------\n");
    for(int i = 0; i < size; i++) {
        printf("%d\t%d\t\t%p\n", i, *(arr + i), (void*)(arr + i));
    }
    
    // Reverse array using pointers
    reverseArray(arr, size);
    
    // Display reversed array
    printf("\nReversed Array:\n");
    printf("==============\n");
    printf("Index\tValue\t\tAddress\n");
    printf("--------------------------------\n");
    for(int i = 0; i < size; i++) {
        printf("%d\t%d\t\t%p\n", i, *(arr + i), (void*)(arr + i));
    }
    
    // Array analysis using pointers
    printf("\nArray Analysis:\n");
    printf("==============\n");
    
    // Find maximum and minimum
    int *max = arr;
    int *min = arr;
    for(int i = 1; i < size; i++) {
        if(*(arr + i) > *max) max = arr + i;
        if(*(arr + i) < *min) min = arr + i;
    }
    
    printf("Maximum element: %d (at index %ld)\n", 
           *max, max - arr);
    printf("Minimum element: %d (at index %ld)\n", 
           *min, min - arr);
    
    // Calculate sum and average using pointers
    int sum = 0;
    int *ptr = arr;
    for(int i = 0; i < size; i++) {
        sum += *ptr++;
    }
    float average = (float)sum / size;
    
    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);
    
    return 0;
}
