#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter Three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    max(a,b,c);
    
    return 0;
}

float max(int a,int b,int c);

float max(int a,int b,int c){
    printf("Enter Three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if ((a > b) && (a > c))
    {
        printf("a is gretest");

    }
    else if ((b > c) && (b > a))
    {
        printf("b is gretest");
    }
    else{
        printf("c is gretest");
    }
    
}