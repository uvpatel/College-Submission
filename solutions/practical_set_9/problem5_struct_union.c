#include <stdio.h>
#include <string.h>

// Define structure Data
struct Data {
    int i;
    float f;
    char str[20];
};

// Define union Data
union Data_U {
    int i;
    float f;
    char str[20];
};

// Program 5: Compare structure and union behavior
int main() {
    struct Data s_data;
    union Data_U u_data;
    
    printf("Structure vs Union Demonstration\n");
    printf("==============================\n");
    
    // Structure demonstration
    printf("\nStructure Demonstration:\n");
    printf("=====================\n");
    
    // Assign values to structure members
    s_data.i = 42;
    s_data.f = 3.14;
    strcpy(s_data.str, "Hello");
    
    // Display structure values
    printf("After assigning all values:\n");
    printf("Integer: %d\n", s_data.i);
    printf("Float: %f\n", s_data.f);
    printf("String: %s\n", s_data.str);
    
    // Union demonstration
    printf("\nUnion Demonstration:\n");
    printf("==================\n");
    
    // Assign and display integer
    printf("\n1. Assigning integer value:\n");
    u_data.i = 42;
    printf("Integer: %d\n", u_data.i);
    printf("Float: %f\n", u_data.f);
    printf("String: %s\n", u_data.str);
    
    // Assign and display float
    printf("\n2. Assigning float value:\n");
    u_data.f = 3.14;
    printf("Integer: %d\n", u_data.i);
    printf("Float: %f\n", u_data.f);
    printf("String: %s\n", u_data.str);
    
    // Assign and display string
    printf("\n3. Assigning string value:\n");
    strcpy(u_data.str, "Hello");
    printf("Integer: %d\n", u_data.i);
    printf("Float: %f\n", u_data.f);
    printf("String: %s\n", u_data.str);
    
    // Display sizes
    printf("\nSize Comparison:\n");
    printf("==============\n");
    printf("Size of structure: %zu bytes\n", sizeof(struct Data));
    printf("Size of union: %zu bytes\n", sizeof(union Data_U));
    
    // Explanation
    printf("\nExplanation:\n");
    printf("===========\n");
    printf("1. Structure:\n");
    printf("   - Allocates memory for all members\n");
    printf("   - Can store all values simultaneously\n");
    printf("   - Size is sum of all member sizes (with padding)\n");
    printf("\n2. Union:\n");
    printf("   - Allocates memory for largest member only\n");
    printf("   - Can store only one value at a time\n");
    printf("   - Size is equal to largest member size\n");
    printf("   - Modifying one member affects others\n");
    
    return 0;
}
