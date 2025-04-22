#include <stdio.h>

int main(){
    int a = 5;
    float b = 6.5;
    double c = 7.5;
    char d = 'A';

    printf("The type of a is: %d\n", sizeof(a));
    printf("The type of b is: %f\n", sizeof(b));
    printf("The type of c is: %lf\n", sizeof(c));
    printf("The type of d is: %c\n", sizeof(d));

    /*size function will tell about variable.*/
    return 0;
}