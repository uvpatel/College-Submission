#include <stdio.h>

int main(){
    float x = 5.5;
    
    int y;

    y = (int)x; // Explicit type conversion from float to int

    printf("The value of y is: %d\n", y); // Output: 5
    
    return 0;
}