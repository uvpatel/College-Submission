#include <stdio.h>

int main(){
    int i ,n,fact;
    printf("Enter n: ");
    scanf("%d",&n);
    i = 1;
    fact = 1;

    while(i<=n){
        fact = fact * i;
        i++;
    }
    printf("The given %d's factorial is %d",n,fact);
    return 0;
}