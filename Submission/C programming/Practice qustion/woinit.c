#include <stdio.h>

int main()
{
    int i ;
    while (i < 10)
    {
        /* code */
        printf("%d",i);
        
    }
    // throw garbage value when variable is not initialize.
    printf("%d",i);
    
    return 0;
}