#include <stdio.h>

// Define PI as a symbolic constant
#define PI 3.14159

// Program 6: Calculate area and circumference of a circle
int main() {
    // Declare variables
    float radius, area, circumference;
    
    // Get radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    // Display results
    printf("\nResults for circle with radius %.2f:\n", radius);
    printf("Area = %.2f square units\n", area);
    printf("Circumference = %.2f units\n", circumference);
    
    return 0;
}
