#include <stdio.h>

int main(){
    int n;
    printf("enter value of n: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" * ");
        } 
        for (int j = n; j > 0; j--)
        {
            printf(" * ");
        }   
        
        
        printf("\n");
        
    }
    
    return 0;
}