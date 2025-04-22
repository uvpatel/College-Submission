#include <stdio.h>
#include <math.h>


int main(){
    float x ;
    printf("Enter the value of x: ");
    scanf("%f", &x);

    int y = ceil(x);
    printf("The value of y is: %d\n", y); // Output: 5

    int z = floor(x);
    printf("The value of z is: %d\n", z); // Output: 5

    int a = round(x);
    printf("The value of a is: %d\n", a); // Output: 5

    int c = -11;
    int b = fabs(c);
    int d;
    printf("The value of c is: "); // Output: 11
    scanf("%d", &c);

    int d = sqrt(c);

    printf("The value of d is: %d\n", d); // Output: 3.32

    int e;
    printf("Enter the value of e(power): ");
    scanf("%d", &e);

    int base;
    printf("Enter the value of base: ");
    scanf("%d", &base);
    
    int f = pow(base, e);
    printf("The value of f is: %d\n", f); // Output: 9
    return 0;
}