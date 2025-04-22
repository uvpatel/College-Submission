#include <stdio.h>

int main(){
    int numberplate;
    printf("Enter the number plate: ");
    scanf("%d", &numberplate);

    if (numberplate % 2 == 0) {
        printf("The number plate is even.\n so you can park in the even day at parking lot.\n");
    } else {
        
        printf("The number plate is odd.\n so you can park in the odd day at parking lot.\n");
    }
    
    
    return 0;
}