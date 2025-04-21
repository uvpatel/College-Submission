#include <stdio.h>

#define MAX_BOOKS 100

// Structure to represent a book
struct Book {
    int id;
    char title[100];
};

// Function to print the book array
void printBooks(struct Book books[], int size) {
    printf("\nCurrent Book Arrangement:\n");
    printf("=======================\n");
    for(int i = 0; i < size; i++) {
        printf("Position %2d: [ID: %3d] %s\n", i + 1, books[i].id, books[i].title);
    }
    printf("\n");
}

// Program 3: Sort books by ID using Bubble Sort
int main() {
    struct Book books[MAX_BOOKS];
    int size, i, j;
    
    printf("Library Book Sorting System\n");
    printf("=========================\n");
    
    // Input number of books
    printf("Enter number of books (max %d): ", MAX_BOOKS);
    scanf("%d", &size);
    
    if(size <= 0 || size > MAX_BOOKS) {
        printf("Invalid number of books!\n");
        return 1;
    }
    
    // Input book details
    printf("\nEnter book details:\n");
    for(i = 0; i < size; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &books[i].id);
        printf("Title: ");
        getchar();  // Clear input buffer
        gets(books[i].title);
    }
    
    // Display original arrangement
    printf("\nOriginal Arrangement:");
    printBooks(books, size);
    
    // Sort books using Bubble Sort
    printf("Sorting books by ID...\n");
    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(books[j].id > books[j + 1].id) {
                // Swap books
                struct Book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
                
                // Show intermediate step
                printf("\nAfter swap:");
                printBooks(books, size);
            }
        }
    }
    
    // Display final sorted arrangement
    printf("\nFinal Sorted Arrangement:");
    printBooks(books, size);
    
    return 0;
}
