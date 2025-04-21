#include <stdio.h>

#define MAX_SIZE 100

// Program 2: Linear and Binary Search in Array
void linearSearch(int arr[], int size, int key) {
    int i, found = 0;
    printf("\nPerforming Linear Search for %d:\n", key);
    
    for(i = 0; i < size; i++) {
        printf("Checking element at index %d: %d\n", i, arr[i]);
        if(arr[i] == key) {
            printf("Element found at index %d!\n", i);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("Element not found in array.\n");
    }
}

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    printf("\nSorting array for Binary Search:\n");
    
    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
        // Print array after each pass
        printf("Pass %d: ", i + 1);
        for(j = 0; j < size; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}

void binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    int found = 0;
    int step = 1;
    
    printf("\nPerforming Binary Search for %d:\n", key);
    
    while(left <= right) {
        int mid = (left + right) / 2;
        printf("Step %d: Checking middle element at index %d: %d\n", step++, mid, arr[mid]);
        
        if(arr[mid] == key) {
            printf("Element found at index %d!\n", mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            printf("Element is in right half\n");
            left = mid + 1;
        }
        else {
            printf("Element is in left half\n");
            right = mid - 1;
        }
    }
    
    if(!found) {
        printf("Element not found in array.\n");
    }
}

int main() {
    int arr[MAX_SIZE], sorted_arr[MAX_SIZE];
    int size, i, search_key;
    
    printf("Array Search Demonstration\n");
    printf("========================\n");
    
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
        sorted_arr[i] = arr[i];  // Copy array for binary search
    }
    
    // Input search key
    printf("\nEnter element to search: ");
    scanf("%d", &search_key);
    
    // Perform Linear Search on original array
    linearSearch(arr, size, search_key);
    
    // Sort array and perform Binary Search
    bubbleSort(sorted_arr, size);
    binarySearch(sorted_arr, size, search_key);
    
    return 0;
}
