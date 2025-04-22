#include <stdio.h>

int main()
{
    int n = 5;
    int *ptr = &n;
    printf("The value of n is %d\n ", n);
    printf("The Address of n is %p\n", ptr);
    printf("The Address of n is %p\n", &(*ptr));
    printf("The value of n is %d", *ptr);
    return 0;
}