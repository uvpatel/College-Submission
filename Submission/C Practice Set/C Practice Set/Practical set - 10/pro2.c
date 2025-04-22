#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    
    int *ptr = &a;
    int *ptr1 = &b;

    printf("The multyplication is %d",(*ptr) * (*ptr1));
    return 0;
}