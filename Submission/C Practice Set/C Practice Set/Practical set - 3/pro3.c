#include <stdio.h>
#include <stdbool.h>

int main(){
    int x;
    char ch;
    float f;
    double d;
    short s;
    long l;
    bool b;

    printf("Size of int: %zu bytes\n", sizeof(x));
    printf("Size of char: %zu bytes\n", sizeof(ch));
    printf("Size of float: %zu bytes\n", sizeof(f));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of short: %zu bytes\n", sizeof(s));
    printf("Size of long: %zu bytes\n", sizeof(l));
    printf("Size of bool: %zu bytes\n", sizeof(b));
    

    return 0;
}