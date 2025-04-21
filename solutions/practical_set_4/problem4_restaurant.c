#include <stdio.h>

// Program 4: Restaurant menu system
int main() {
    int choice;
    float total = 0;
    char order_more;
    
    do {
        // Display menu
        printf("\nRestaurant Menu\n");
        printf("==============\n");
        printf("1. Burger      - $5.99\n");
        printf("2. Pizza       - $8.99\n");
        printf("3. Pasta       - $7.99\n");
        printf("4. Salad       - $4.99\n");
        printf("5. Soft Drink  - $1.99\n");
        
        // Get customer's choice
        printf("\nEnter item number (1-5): ");
        scanf("%d", &choice);
        
        // Process selection
        switch(choice) {
            case 1:
                printf("You selected: Burger\n");
                printf("Price: $5.99\n");
                total += 5.99;
                break;
                
            case 2:
                printf("You selected: Pizza\n");
                printf("Price: $8.99\n");
                total += 8.99;
                break;
                
            case 3:
                printf("You selected: Pasta\n");
                printf("Price: $7.99\n");
                total += 7.99;
                break;
                
            case 4:
                printf("You selected: Salad\n");
                printf("Price: $4.99\n");
                total += 4.99;
                break;
                
            case 5:
                printf("You selected: Soft Drink\n");
                printf("Price: $1.99\n");
                total += 1.99;
                break;
                
            default:
                printf("Invalid selection!\n");
                break;
        }
        
        // Ask if customer wants to order more
        printf("\nWould you like to order more items? (y/n): ");
        scanf(" %c", &order_more);
        
    } while(order_more == 'y' || order_more == 'Y');
    
    // Display final bill
    printf("\nFinal Bill\n");
    printf("==========\n");
    printf("Total amount: $%.2f\n", total);
    printf("Thank you for dining with us!\n");
    
    return 0;
}
