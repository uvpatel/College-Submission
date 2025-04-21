#include <stdio.h>

#define MAX_MONTHS 12
#define MAX_REGIONS 10

// Program 5: Sales data analysis using matrices
int main() {
    float dept1[MAX_REGIONS][MAX_MONTHS];
    float dept2[MAX_REGIONS][MAX_MONTHS];
    float total[MAX_REGIONS][MAX_MONTHS];
    int num_regions, num_months;
    int i, j;
    
    printf("Sales Data Analysis System\n");
    printf("=========================\n");
    
    // Input dimensions
    printf("Enter number of regions (max %d): ", MAX_REGIONS);
    scanf("%d", &num_regions);
    printf("Enter number of months (max %d): ", MAX_MONTHS);
    scanf("%d", &num_months);
    
    if(num_regions <= 0 || num_regions > MAX_REGIONS || 
       num_months <= 0 || num_months > MAX_MONTHS) {
        printf("Invalid input!\n");
        return 1;
    }
    
    // Input sales data for Department 1
    printf("\nEnter sales data for Department 1:\n");
    for(i = 0; i < num_regions; i++) {
        printf("\nRegion %d:\n", i + 1);
        for(j = 0; j < num_months; j++) {
            printf("Month %d: $", j + 1);
            scanf("%f", &dept1[i][j]);
        }
    }
    
    // Input sales data for Department 2
    printf("\nEnter sales data for Department 2:\n");
    for(i = 0; i < num_regions; i++) {
        printf("\nRegion %d:\n", i + 1);
        for(j = 0; j < num_months; j++) {
            printf("Month %d: $", j + 1);
            scanf("%f", &dept2[i][j]);
        }
    }
    
    // Calculate total sales and display results
    printf("\nCombined Sales Analysis:\n");
    printf("======================\n\n");
    
    // Header
    printf("        ");
    for(j = 0; j < num_months; j++) {
        printf("M%-7d", j + 1);
    }
    printf("Total\n");
    
    // Print horizontal line
    for(j = 0; j < num_months + 2; j++) {
        printf("--------");
    }
    printf("\n");
    
    // Calculate and display totals for each region
    float grand_total = 0;
    for(i = 0; i < num_regions; i++) {
        printf("Region %d ", i + 1);
        float region_total = 0;
        
        for(j = 0; j < num_months; j++) {
            total[i][j] = dept1[i][j] + dept2[i][j];
            printf("$%-7.2f", total[i][j]);
            region_total += total[i][j];
        }
        
        printf("$%-7.2f\n", region_total);
        grand_total += region_total;
    }
    
    // Print horizontal line
    for(j = 0; j < num_months + 2; j++) {
        printf("--------");
    }
    printf("\n");
    
    // Calculate and display monthly totals
    printf("Total   ");
    for(j = 0; j < num_months; j++) {
        float month_total = 0;
        for(i = 0; i < num_regions; i++) {
            month_total += total[i][j];
        }
        printf("$%-7.2f", month_total);
    }
    printf("$%-7.2f\n", grand_total);
    
    return 0;
}
