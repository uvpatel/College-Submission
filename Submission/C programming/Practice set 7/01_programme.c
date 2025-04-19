#include <stdio.h>

int main(){
    int n ;
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&n);


    }
    int max,min;
    for (int j = 0; j < 20; j++)
    {
        int min = arr[j];
        if(arr[j] <min){
            int min = arr[j];
        }
    }
    printf("%d",min);
    for (int j = 0; j < 20; j++)
    {
        int max = arr[j];
        if(arr[j] >max){
        }
       int  max = arr[j];
        printf("%d",max);
    }
    
    int sum = 0;
    for (int k = 0; k < 20; k++)
    {
        sum += arr[k];
    }
    float avg = sum / 2;
    
    return 0;
}