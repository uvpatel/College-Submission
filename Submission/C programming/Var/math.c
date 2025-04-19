#include <stdio.h>
#include <math.h>
#include <errno.h>
#define M_PI 3.14159265358979323846 

// Function to convert degrees to radians
// Formula: radians = degrees * (π / 180.0)
double degrees_to_radians(double degrees) {
    return degrees * (M_PI / 180.0);
}

int main() {
    // Initialize errno to 0 before using math functions
    // Some math functions set errno on error (e.g., domain or range errors)
    errno = 0;

    // --- Section 1: Trigonometric Functions ---
    // We'll calculate the sine and cosine of a 45-degree angle
    double degrees = 45.0; // Angle in degrees
    double radians = degrees_to_radians(degrees); // Convert to radians

    // Compute sine and cosine of the angle
    double sine_result = sin(radians);
    double cosine_result = cos(radians);

    // Print the results with 4 decimal places for clarity
    printf("--- Trigonometric Functions ---\n");
    printf("Sine of %.1f degrees (%.4f radians) = %.4f\n", degrees, radians, sine_result);
    printf("Cosine of %.1f degrees (%.4f radians) = %.4f\n", degrees, radians, cosine_result);

    // --- Section 2: Exponential and Logarithmic Functions ---
    // We'll compute e^x, natural log, and base-10 log of a number
    double x_exp = 2.0; // Input for exponential and logarithmic functions

    // Compute exponential (e^x), natural log (ln(x)), and base-10 log (log10(x))
    double exp_result = exp(x_exp);
    double log_result = log(x_exp);   // Natural log
    double log10_result = log10(x_exp); // Base-10 log

    // Print the results
    printf("\n--- Exponential and Logarithmic Functions ---\n");
    printf("e^%.1f = %.4f\n", x_exp, exp_result);
    printf("Natural log of %.1f = %.4f\n", x_exp, log_result);
    printf("Base-10 log of %.1f = %.4f\n", x_exp, log10_result);

    // --- Section 3: Rounding Functions ---
    // We'll demonstrate different rounding methods on a floating-point number
    double x_round = 3.7; // Input for rounding functions

    // Compute various rounding operations
    double floor_result = floor(x_round); // Rounds down
    double ceil_result = ceil(x_round);   // Rounds up
    double round_result = round(x_round); // Rounds to nearest integer
    double trunc_result = trunc(x_round); // Truncates decimal part

    // Print the results
    printf("\n--- Rounding Functions ---\n");
    printf("Original number: %.1f\n", x_round);
    printf("Floor (round down): %.1f\n", floor_result);
    printf("Ceil (round up): %.1f\n", ceil_result);
    printf("Round (nearest integer): %.1f\n", round_result);
    printf("Trunc (remove decimal): %.1f\n", trunc_result);

    // --- Section 4: Error Handling Example ---
    // We'll try to compute the square root of a negative number to demonstrate error handling
    double x_sqrt = -1.0; // Invalid input for sqrt (domain error)

    // Reset errno before calling sqrt
    errno = 0;
    double sqrt_result = sqrt(x_sqrt);

    // Check for errors
    printf("\n--- Error Handling Example ---\n");
    if (errno == EDOM) {
        // EDOM indicates a domain error (e.g., sqrt of a negative number)
        printf("Domain error: Cannot compute sqrt of %.1f (negative number)\n", x_sqrt);
    } else if (isnan(sqrt_result)) {
        // isnan checks if the result is "Not a Number"
        printf("Result is NaN\n");
    } else {
        // If no error, print the result
        printf("Square root of %.1f = %.4f\n", x_sqrt, sqrt_result);
    }

    // --- Section 5: Additional Example with Power and Constants ---
    // We'll use pow() and some math constants like M_PI
    double base = 2.0;
    double exponent = 3.0;
    double power_result = pow(base, exponent); // Compute 2^3

    // Print the result along with a math constant
    printf("\n--- Power and Constants Example ---\n");
    printf("%.1f raised to the power %.1f = %.1f\n", base, exponent, power_result);
    printf("Value of π (M_PI) = %.6f\n", M_PI);

    return 0;
}