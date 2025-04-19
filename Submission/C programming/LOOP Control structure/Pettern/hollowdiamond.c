#include <stdio.h>

int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    // top
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        
       printf("*");

       if (i != 0)
       {
        for (int k = 0; k < 2*i-1; k++)
        {
            printf(" ");
        }
        
        printf("*");

       }
       printf("\n");
        
    }
    for (int p = 0; p < n-1; p++)
    {
        for (int j = 0; j < i+1 ; j++)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");}
    
    return 0;

    *
   * *
  *    * 
*        *
 *     *      
   * *
    * 
}