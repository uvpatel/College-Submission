#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if ( (marks>=100) || (marks >= 90)) {
        printf("Grade: A\n");
    } else if ((marks> 90) ||( marks >= 80)) {
        printf("Grade: B\n");
    } else if (   ( marks >80) || (marks >= 70)) {
        printf("Grade: C\n");
    } else if ((marks > 70 )|| (marks >= 60)) {
        printf("Grade: D\n");
    } else if ((marks > 60) || ( marks >= 50)) {
        printf("Grade: E\n");
    } else
    {
        /* code */
    }
    
    return 0;
}