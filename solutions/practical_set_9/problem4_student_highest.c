#include <stdio.h>
#include <string.h>

// Define student structure
struct Student {
    char name[50];
    int roll_number;
    float marks;
};

// Function to input student details
void inputStudent(struct Student *s) {
    printf("Name: ");
    gets(s->name);
    
    printf("Roll Number: ");
    scanf("%d", &s->roll_number);
    
    printf("Marks: ");
    scanf("%f", &s->marks);
    getchar();  // Clear input buffer
}

// Function to display student details
void displayStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Marks: %.2f\n", s.marks);
}

// Function to find student with highest marks
struct Student findHighestMarks(struct Student students[], int n) {
    struct Student highest = students[0];
    for(int i = 1; i < n; i++) {
        if(students[i].marks > highest.marks) {
            highest = students[i];
        }
    }
    return highest;
}

// Program 4: Find student with highest marks
int main() {
    struct Student students[5];  // Array of 5 students
    
    printf("Student Performance Analyzer\n");
    printf("==========================\n");
    
    // Input details for 5 students
    for(int i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        inputStudent(&students[i]);
    }
    
    // Display all students' details
    printf("\nClass Record:\n");
    printf("============\n");
    printf("Roll No  Name                  Marks\n");
    printf("-----------------------------------\n");
    
    float total_marks = 0;
    for(int i = 0; i < 5; i++) {
        printf("%-8d %-20s %.2f\n", 
               students[i].roll_number, 
               students[i].name, 
               students[i].marks);
        total_marks += students[i].marks;
    }
    
    // Calculate and display class statistics
    float average_marks = total_marks / 5;
    printf("\nClass Statistics:\n");
    printf("================\n");
    printf("Class Average: %.2f\n", average_marks);
    
    // Find and display student with highest marks
    struct Student topper = findHighestMarks(students, 5);
    printf("\nStudent with Highest Marks:\n");
    printf("=========================\n");
    displayStudent(topper);
    
    // Additional analysis
    printf("\nPerformance Analysis:\n");
    printf("===================\n");
    
    int above_average = 0;
    int below_average = 0;
    
    for(int i = 0; i < 5; i++) {
        if(students[i].marks > average_marks) {
            above_average++;
        } else if(students[i].marks < average_marks) {
            below_average++;
        }
    }
    
    printf("Students above average: %d\n", above_average);
    printf("Students below average: %d\n", below_average);
    printf("Students at average: %d\n", 5 - above_average - below_average);
    
    return 0;
}
