#include <stdio.h>

int main(){
    int n;
    printf("Enter number of book: ");
    scanf("%d",&n);
    int idnumber[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter id number: ");
        scanf("%d",&idnumber);
    }

    for (int j = 0; j < n; j++)
    {
        int min = idnumber[0];
        if (min < idnumber)
        {
            min = idnumber;
        }
        

    }
    
    