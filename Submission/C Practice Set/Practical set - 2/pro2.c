#include <stdio.h>

int main(){
    float num1,num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("The sum is: %.2f\n", num1 + num2);
    printf("The difference is: %.2f\n", num1 - num2);
    printf("The product is: %.2f\n", num1 * num2);
    printf("The quotient is: %.2f\n", num1 / num2);
    printf("The remainder is: %.2f\n", (int)num1 % (int)num2); // Cast to int for modulus
    return 0;
}