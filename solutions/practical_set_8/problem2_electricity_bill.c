#include <stdio.h>

// Function to calculate electricity bill based on units consumed
float calculateBill(int units) {
    float bill = 0;
    
    // Calculate bill based on slabs
    if(units <= 100) {
        bill = units * 1.50;
    }
    else if(units <= 200) {
        bill = (100 * 1.50) + ((units - 100) * 2.00);
    }
    else if(units <= 300) {
        bill = (100 * 1.50) + (100 * 2.00) + ((units - 200) * 3.00);
    }
    else {
        bill = (100 * 1.50) + (100 * 2.00) + (100 * 3.00) + ((units - 300) * 5.00);
    }
    
    return bill;
}

// Program 2: Electricity Bill Generator
int main() {
    int units;
    
    printf("Electricity Bill Generator\n");
    printf("========================\n");
    
    // Input units consumed
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    if(units < 0) {
        printf("Error: Units consumed cannot be negative!\n");
        return 1;
    }
    
    // Calculate and display bill
    float total_bill = calculateBill(units);
    
    printf("\nBill Calculation:\n");
    printf("================\n");
    
    // Show slab-wise calculation
    if(units > 0) {
        int remaining = units;
        float slab_amount;
        
        // First slab (0-100 units)
        slab_amount = (remaining > 100 ? 100 : remaining) * 1.50;
        printf("Slab 1 (0-100 units): %d units @ ₹1.50 = ₹%.2f\n",
               remaining > 100 ? 100 : remaining, slab_amount);
        remaining -= 100;
        
        if(remaining > 0) {
            // Second slab (101-200 units)
            slab_amount = (remaining > 100 ? 100 : remaining) * 2.00;
            printf("Slab 2 (101-200 units): %d units @ ₹2.00 = ₹%.2f\n",
                   remaining > 100 ? 100 : remaining, slab_amount);
            remaining -= 100;
            
            if(remaining > 0) {
                // Third slab (201-300 units)
                slab_amount = (remaining > 100 ? 100 : remaining) * 3.00;
                printf("Slab 3 (201-300 units): %d units @ ₹3.00 = ₹%.2f\n",
                       remaining > 100 ? 100 : remaining, slab_amount);
                remaining -= 100;
                
                if(remaining > 0) {
                    // Fourth slab (above 300 units)
                    slab_amount = remaining * 5.00;
                    printf("Slab 4 (above 300 units): %d units @ ₹5.00 = ₹%.2f\n",
                           remaining, slab_amount);
                }
            }
        }
    }
    
    printf("\nTotal Bill Amount: ₹%.2f\n", total_bill);
    
    return 0;
}
