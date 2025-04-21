#include <stdio.h>
#include <string.h>

// Define product structure
struct Product {
    int id;
    char name[100];
    int quantity;
    float price;
};

// Function to display product details
void displayProduct(struct Product p) {
    float total_value = p.quantity * p.price;
    printf("%-5d %-20s %-8d $%-10.2f $%.2f\n", 
           p.id, p.name, p.quantity, p.price, total_value);
}

// Program 2: Product inventory management
int main() {
    int n;
    float total_inventory_value = 0;
    
    printf("Product Inventory Management System\n");
    printf("=================================\n");
    
    // Input number of products
    printf("Enter number of products: ");
    scanf("%d", &n);
    
    if(n <= 0) {
        printf("Error: Invalid number of products!\n");
        return 1;
    }
    
    // Create array of products
    struct Product products[n];
    
    // Input product details
    printf("\nEnter product details:\n");
    for(int i = 0; i < n; i++) {
        printf("\nProduct %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &products[i].id);
        
        printf("Name: ");
        getchar();  // Clear input buffer
        gets(products[i].name);
        
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);
        
        printf("Price per unit: $");
        scanf("%f", &products[i].price);
    }
    
    // Display inventory report
    printf("\nInventory Report\n");
    printf("===============\n");
    printf("ID    Name                 Quantity Price      Total Value\n");
    printf("-----------------------------------------------------------\n");
    
    // Display each product and calculate total inventory value
    for(int i = 0; i < n; i++) {
        displayProduct(products[i]);
        total_inventory_value += products[i].quantity * products[i].price;
    }
    
    printf("-----------------------------------------------------------\n");
    printf("Total Inventory Value: $%.2f\n", total_inventory_value);
    
    // Additional analysis
    printf("\nInventory Analysis:\n");
    printf("==================\n");
    
    // Find product with highest value
    int max_value_index = 0;
    float max_value = products[0].quantity * products[0].price;
    
    // Find product with lowest stock
    int min_stock_index = 0;
    int min_stock = products[0].quantity;
    
    for(int i = 1; i < n; i++) {
        float value = products[i].quantity * products[i].price;
        if(value > max_value) {
            max_value = value;
            max_value_index = i;
        }
        
        if(products[i].quantity < min_stock) {
            min_stock = products[i].quantity;
            min_stock_index = i;
        }
    }
    
    printf("Product with highest value: %s ($%.2f)\n", 
           products[max_value_index].name, max_value);
    printf("Product with lowest stock: %s (%d units)\n", 
           products[min_stock_index].name, products[min_stock_index].quantity);
    
    return 0;
}
