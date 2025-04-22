#include <stdio.h>

int main(){
    int attendance[3][5];

    for (int  i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter Student: ");
            scanf("%d",&attendance[i][j]);
        }
        
    }
    
    return 0;
}