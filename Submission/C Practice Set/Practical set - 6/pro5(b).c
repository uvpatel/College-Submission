#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 5; j > 0; j--)
        {
                printf("* ");
        }
        
        printf("\n");
    }
    
    return 0;
}