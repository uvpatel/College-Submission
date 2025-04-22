#include <stdio.h>

struct Product
{
    int quantity;
    float price;
    int pro_id;
    char pro_name[20] ;

};

int main(){
    struct  Product p1;

    p1.quantity = 5;
    p1.price = 650.00;
    p1.pro_id = 1;
    p1.pro_name[20] =  "Parle";
    
    printf("product's Quantity : %d",p1.quantity);
    printf("product's name : %d",p1.pro_name);
    printf("product's id: %d",p1.pro_id);
    printf("product's price : %d",p1.price);

    
    return 0;
}