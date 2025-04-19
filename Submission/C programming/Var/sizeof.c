#include <stdio.h>

int main(){
    int a = 5;
    float b = 10;
    char c = 'A';

    printf("The type of a is %d\n",sizeof(a));
    printf("The type of b is %d\n",sizeof(b));
    printf("The type of c is %d\n",sizeof(c));
    return 0;
}