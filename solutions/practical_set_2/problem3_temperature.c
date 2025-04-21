#include <stdio.h>

// Program 3: Temperature conversion (Fahrenheit to Celsius)
int main() {
    float fahrenheit, celsius;
    
    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Convert to Celsius using the formula: C = 5*(F-32)/9
    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;
    
    // Display result
    printf("%.2f°F = %.2f°C\n", fahrenheit, celsius);
    
    return 0;
}
