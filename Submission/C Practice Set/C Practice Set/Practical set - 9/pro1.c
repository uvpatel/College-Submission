#include <stdio.h>

struct data
{
    float Book_price;
    char book_name[10];
    int book_page;
};


// {
    

int main()
{
    struct data b1;
    b1.Book_price = 600.00;
    b1.book_name[20] = "Ansi c";
    b1.book_page = 500;
    printf("Book name: %c", b1.book_name);
    printf("book price : %f", b1.Book_price);
    printf("Book pages: %d", b1.book_page);

    return 0;
}