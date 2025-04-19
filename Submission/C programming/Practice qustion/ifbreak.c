#include <stdio.h>

int main(){
    int i = 0;
    while (1)
    {
        printf("%d\n",i);
        if (i == 10)
        {
            break;
        }
        i++;
    }
    printf("The value  of i is %d",i);
    
    return 0;
}