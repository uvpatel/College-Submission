#include <stdio.h>

// Program 2: Operator precedence demonstration
int main() {
    int x = 5, y = 3, z = 2;
    int a = 4, b = 3, c = 2;
    int d = 10, e = 3, f = 2;
    int g = 8, h = 4, i = 2;
    int j = 5, k = 5, l = 6;
    
    // A. Default Precedence (Multiplication before Addition)
    printf("A. x + y * z\n");
    printf("   %d + %d * %d = %d\n", x, y, z, x + y * z);
    printf("   Multiplication happens first: %d * %d = %d\n", y, z, y * z);
    printf("   Then addition: %d + %d = %d\n\n", x, y * z, x + y * z);
    
    // B. Parentheses for Control
    printf("B. (a + b) * c\n");
    printf("   (%d + %d) * %d = %d\n", a, b, c, (a + b) * c);
    printf("   Addition in parentheses first: %d + %d = %d\n", a, b, a + b);
    printf("   Then multiplication: %d * %d = %d\n\n", a + b, c, (a + b) * c);
    
    // C. Default Precedence (Modulo before Addition)
    printf("C. d + e %% f\n");
    printf("   %d + %d %% %d = %d\n", d, e, f, d + e % f);
    printf("   Modulo happens first: %d %% %d = %d\n", e, f, e % f);
    printf("   Then addition: %d + %d = %d\n\n", d, e % f, d + e % f);
    
    // D. Associativity (Left-to-Right)
    printf("D. g * h / i\n");
    printf("   %d * %d / %d = %d\n", g, h, i, g * h / i);
    printf("   Left to right: first %d * %d = %d\n", g, h, g * h);
    printf("   Then %d / %d = %d\n\n", g * h, i, g * h / i);
    
    // E. Relational and Logical Operators
    printf("E. j == k || l > k\n");
    printf("   %d == %d || %d > %d = %d\n", j, k, l, k, j == k || l > k);
    printf("   First evaluate: %d == %d is %d\n", j, k, j == k);
    printf("   Then evaluate: %d > %d is %d\n", l, k, l > k);
    printf("   Finally OR operation: %d || %d is %d\n", j == k, l > k, j == k || l > k);
    
    return 0;
}
