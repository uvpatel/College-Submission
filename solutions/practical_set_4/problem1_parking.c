#include <stdio.h>
#include <time.h>

// Program 1: Parking lot system based on license plate number
int main() {
    int plate_number;
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    int current_day = tm->tm_mday;  // Get current day of month
    
    printf("Parking Lot Access System\n");
    printf("========================\n");
    
    // Get license plate number
    printf("Enter your license plate number: ");
    scanf("%d", &plate_number);
    
    // Check if plate number is even or odd
    int is_plate_even = (plate_number % 2 == 0);
    int is_day_even = (current_day % 2 == 0);
    
    printf("\nToday is day %d (%s)\n", 
           current_day, 
           is_day_even ? "even" : "odd");
    printf("Your plate number %d is %s\n", 
           plate_number, 
           is_plate_even ? "even" : "odd");
    
    // Determine access
    if(is_plate_even == is_day_even) {
        printf("\nACCESS GRANTED: Your car is allowed to enter today.\n");
    } else {
        printf("\nACCESS DENIED: Your car is not allowed to enter today.\n");
        printf("Please come back on an %s day.\n", 
               is_plate_even ? "even" : "odd");
    }
    
    return 0;
}
