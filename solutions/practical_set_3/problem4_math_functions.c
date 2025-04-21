#include <stdio.h>
#include <math.h>

// Program 4: Demonstrate math.h library functions
int main() {
    double number;
    
    printf("Enter a number: ");
    scanf("%lf", &number);
    
    printf("\nMath Library Functions Demo:\n");
    printf("===========================\n");
    
    // sqrt() - Square root
    printf("sqrt(%.2f) = %.2f\n", number, sqrt(number));
    
    // pow() - Power
    printf("pow(%.2f, 2) = %.2f\n", number, pow(number, 2));
    printf("pow(%.2f, 3) = %.2f\n", number, pow(number, 3));
    
    // ceil() - Round up to nearest integer
    printf("ceil(%.2f) = %.2f\n", number, ceil(number));
    
    // floor() - Round down to nearest integer
    printf("floor(%.2f) = %.2f\n", number, floor(number));
    
    // fabs() - Absolute value
    printf("fabs(%.2f) = %.2f\n", number, fabs(number));
    
    // Additional examples with negative number
    printf("\nWith negative value (-%f):\n", number);
    printf("fabs(-%.2f) = %.2f\n", number, fabs(-number));
    printf("ceil(-%.2f) = %.2f\n", number, ceil(-number));
    printf("floor(-%.2f) = %.2f\n", number, floor(-number));
    
    return 0;
}
