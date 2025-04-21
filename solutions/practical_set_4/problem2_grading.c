#include <stdio.h>

// Function to determine grade based on marks
char getGrade(float marks) {
    if(marks >= 90) return 'A';
    else if(marks >= 80) return 'B';
    else if(marks >= 70) return 'C';
    else if(marks >= 60) return 'D';
    else return 'F';
}

// Program 2: Automated grading system
int main() {
    float marks;
    
    printf("University Grading System\n");
    printf("========================\n");
    
    // Input marks
    printf("Enter student's marks (0-100): ");
    scanf("%f", &marks);
    
    // Validate input
    if(marks < 0 || marks > 100) {
        printf("Error: Marks must be between 0 and 100\n");
        return 1;
    }
    
    // Get and display grade
    char grade = getGrade(marks);
    
    printf("\nResults:\n");
    printf("Marks: %.2f\n", marks);
    printf("Grade: %c\n", grade);
    
    // Display additional feedback
    printf("\nFeedback: ");
    switch(grade) {
        case 'A':
            printf("Excellent performance!\n");
            break;
        case 'B':
            printf("Good performance!\n");
            break;
        case 'C':
            printf("Average performance. Keep working hard!\n");
            break;
        case 'D':
            printf("Pass, but needs improvement.\n");
            break;
        case 'F':
            printf("Failed. Please seek additional help.\n");
            break;
    }
    
    return 0;
}
