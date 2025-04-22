#include <stdio.h>

int main(){
    int n;
    printf("Enter Customer number: ");
    scanf("%d",&n);
    int customer[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter customer id: ");
        scanf("%d",&customer[i]);
    }
    
    
    return 0;
}