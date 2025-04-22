#include <stdio.h>

int main(){
    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);

   
   float  *ptr1 = &a;
   float  *ptr2 = &b;

   if (*ptr1 > *ptr2)
   {
       printf("a is greater than b\n");
   }
   else if (*ptr1 < *ptr2)
   {
       printf("b is greater than a\n");
   }
   else if (*ptr1 == *ptr2)
   {
       printf("a is equal to b\n");
   }
   else
   {
    printf("Invalid input\n");
   }
   
    return 0;
}