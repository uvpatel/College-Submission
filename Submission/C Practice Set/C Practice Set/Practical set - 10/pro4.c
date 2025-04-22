#include <stdio.h>
 
int main(){
   int a,b,temp;
  printf("Enter two numbers: ");
  scanf("%d %d ",&a,&b);
   int *num1 = &a;
   int *num2 = &b;
   int *temptr = &temp;

   printf("Before swapping: a = %d, b = %d\n", *num1, *num2);
   *temptr = *num1;
     *num1 = *num2;
     *num2 = *temptr;

     printf("After swapping: a = %d, b = %d\n", *num1, *num2);   


   return 0;
}