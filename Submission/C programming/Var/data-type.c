#include <stdio.h>
#include <stdint.h> // For fixed-width integer types like int16_t, int32_t, etc.

int main() {
    int a = 0;               // Standard int
    int16_t b = 5;          // 16-bit integer (requires <stdint.h>)
    int32_t c = 10;         // 32-bit integer
    int8_t d = 'A';         // 8-bit integer
    int64_t e = 1000000000000000000LL; // 64-bit integer (LL suffix for large literal)

    // Use %zu for size_t (the return type of sizeof)
    printf("Size of a (int) is %zu bytes\n", sizeof(a));
    printf("Size of b (int16_t) is %zu bytes\n", sizeof(b));
    printf("Size of c (int32_t) is %zu bytes\n", sizeof(c));
    printf("Size of d (int8_t) is %zu bytes\n", sizeof(d));
    printf("Size of e (int64_t) is %zu bytes\n", sizeof(e));

    return 0;
}