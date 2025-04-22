#include <stdio.h>

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    float marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
        
    }
    int max = marks[0];
    for (int i = 0; i < n; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
        }
        
    }
    printf("Maximum marks: %d\n", max);
    
    int min = marks[0];
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < min)
        {
            min = marks[i];
        }
        
    }
    printf("Minimum marks: %d\n", min);

    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = marks[i] + sum;
    }
    printf("Average marks: %.2f\n", sum/n);
    return 0;
}