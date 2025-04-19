#include <stdio.h>

int main(){

    /*in c language for take an input from the user we use scanf function
    and along with that we use format specifier
    for
     integer &d
     float &f
     char &c

     and & ( ampersent ) use for value at address of __ (given var)  */
    int a;
    float b;
    char c;
    printf("Enter value of a: ");
    scanf("%d",&a );
    printf("Enter value of b: ");
    scanf("%f",&b );
    printf("Enter value of c: ");
    scanf("%c",&c);
    
    printf("The value of a is: %d\n, The value of b is: %f\n, The value of c is: %c",a,b,c);

    return 0;
}