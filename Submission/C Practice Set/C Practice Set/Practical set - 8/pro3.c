#include <stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    fact(n);
    
    return 0;
}

int fact(int n);

fact(int n){


    if(n == 0 || n == 1){
        return 1;
    }
    else{
        
        return  fact(n-1) * n ;
    }
    
}