#include <stdio.h>

struct data
{
    int integer;
    float decimal;
    char string[20];

};

union data1
{
    int integer;
    float decimal;
    char string[20];

};



int main(){
    struct data d1;
    d1.integer = 10;
    d1.decimal = 20.5;
    d1.string[20] = "Urvil";
    printf("Struct data: %d\n", d1.integer);
    printf("Struct data: %f\n", d1.decimal);
    printf("Struct data: %s\n", d1.string);
    union data1 d2;
    d2.integer = 10;
    d2.decimal = 20.5;
    d2.string[20] = "Urvil";
    printf("Union data: %d\n", d2.integer);
    printf("Union data: %f\n", d2.decimal);
    printf("Union data: %s\n", d2.string);
    
    return 0;
}