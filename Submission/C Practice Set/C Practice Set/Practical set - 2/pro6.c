#include <stdio.h>

int main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    int left_shift = n << 1; // Left shift by 1 bit (multiply by 2)
    int  right_shift = n >> 1; // Right shift by 1 bit (divide by 2)

    printf("Left shift: %d\n", left_shift);
    printf("Right shift: %d\n", right_shift);

    return 0;
}