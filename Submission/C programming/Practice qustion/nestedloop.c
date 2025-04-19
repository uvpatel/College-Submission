#include <stdio.h>

int main(){
    int x = 5;
    while (x-- > 0)
    {
        while (x%2 == 0)
        {
            printf("%d",x);
            break;
        }
        
    }
    
    return 0;
}