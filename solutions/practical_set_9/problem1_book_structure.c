#include <stdio.h>
#include <string.h>

// Define book structure
struct Book {
    char book_name[100];
    int book_pages;
    float book_price;
};

// Function to display book details
void displayBook(struct Book book) {
    printf("\nBook Details:\n");
    printf("============\n");
    printf("Name: %s\n", book.book_name);
    printf("Pages: %d\n", book.book_pages);
    printf("Price: $%.2f\n", book.book_price);
}

// Program 1: Book structure demonstration
int main() {
    struct Book myBook;
    
    printf("Book Information System\n");
    printf("=====================\n");
    
    // Input book details
    printf("Enter book name: ");
    gets(myBook.book_name);
    
    printf("Enter number of pages: ");
    scanf("%d", &myBook.book_pages);
    
    printf("Enter price: $");
    scanf("%f", &myBook.book_price);
    
    // Display book details
    displayBook(myBook);
    
    // Additional analysis
    printf("\nAnalysis:\n");
    printf("=========\n");
    printf("Cost per page: $%.3f\n", myBook.book_price / myBook.book_pages);
    
    if(myBook.book_pages < 100) {
        printf("This is a relatively short book.\n");
    } else if(myBook.book_pages < 300) {
        printf("This is a medium-length book.\n");
    } else {
        printf("This is a lengthy book.\n");
    }
    
    if(myBook.book_price < 10) {
        printf("This book is in the budget category.\n");
    } else if(myBook.book_price < 30) {
        printf("This book is moderately priced.\n");
    } else {
        printf("This is a premium-priced book.\n");
    }
    
    return 0;
}
