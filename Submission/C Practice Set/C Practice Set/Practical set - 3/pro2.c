#include <stdio.h>

int main(){
    int x,y,z;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    // A. x + y * z

    printf("A. x + y * z = %d\n", x + y * z);
    // (x + y) * z
    printf("A. x + y * z = %d\n", (x + y) * z);
    // x + y % z
    printf("A. x + y * z = %d\n", x + y % z);
    // x*y / z
    printf("A. x + y * z = %d\n", x * y / z);

    // x == y || z> y
    printf("A. x + y * z = %d\n", x == y || z > y);


    
    return 0;
}