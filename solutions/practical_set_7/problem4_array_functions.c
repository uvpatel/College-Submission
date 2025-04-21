#include <stdio.h>

// Function to input array elements
void inputArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to display array elements
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to find maximum element
int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find minimum element
int findMin(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Function to calculate average
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

// Function to search element
int searchElement(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

// Function to sort array in ascending order
void sortArray(int arr[], int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Program 4: Array Functions
int main() {
    int arr[100];
    int size, choice, key;
    
    printf("Array Functions\n");
    printf("==============\n");
    
    printf("Enter size of array (max 100): ");
    scanf("%d", &size);
    
    if(size <= 0 || size > 100) {
        printf("Invalid size! Please enter a size between 1 and 100.\n");
        return 1;
    }
    
    // Input array elements
    printf("\nEnter array elements:\n");
    inputArray(arr, size);
    
    do {
        printf("\nOperations:\n");
        printf("1. Display array\n");
        printf("2. Find maximum element\n");
        printf("3. Find minimum element\n");
        printf("4. Calculate average\n");
        printf("5. Search element\n");
        printf("6. Sort array\n");
        printf("7. Exit\n");
        
        printf("\nEnter your choice (1-7): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nArray Display\n");
                printf("------------\n");
                displayArray(arr, size);
                break;
                
            case 2:
                printf("\nMaximum Element\n");
                printf("--------------\n");
                printf("Maximum element: %d\n", findMax(arr, size));
                break;
                
            case 3:
                printf("\nMinimum Element\n");
                printf("--------------\n");
                printf("Minimum element: %d\n", findMin(arr, size));
                break;
                
            case 4:
                printf("\nAverage Calculation\n");
                printf("-----------------\n");
                printf("Average of elements: %.2f\n", calculateAverage(arr, size));
                break;
                
            case 5:
                printf("\nElement Search\n");
                printf("-------------\n");
                printf("Enter element to search: ");
                scanf("%d", &key);
                
                int index = searchElement(arr, size, key);
                if(index != -1) {
                    printf("Element %d found at index %d\n", key, index);
                } else {
                    printf("Element %d not found in array\n", key);
                }
                break;
                
            case 6:
                printf("\nArray Sorting\n");
                printf("------------\n");
                printf("Original array: ");
                displayArray(arr, size);
                
                sortArray(arr, size);
                printf("Sorted array: ");
                displayArray(arr, size);
                break;
                
            case 7:
                printf("\nThank you for using Array Functions!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        
    } while(choice != 7);
    
    return 0;
}
