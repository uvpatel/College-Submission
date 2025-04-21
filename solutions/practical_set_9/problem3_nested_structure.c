#include <stdio.h>
#include <string.h>

// Define address structure
struct Address {
    char city[50];
    int pincode;
};

// Define student structure with nested address
struct Student {
    char name[50];
    int roll_number;
    struct Address addr;  // Nested structure
};

// Function to display student details
void displayStudent(struct Student s) {
    printf("\nStudent Details:\n");
    printf("===============\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("City: %s\n", s.addr.city);
    printf("Pincode: %d\n", s.addr.pincode);
}

// Program 3: Nested structure demonstration
int main() {
    struct Student students[3];  // Array of 3 students
    
    printf("Student Information System\n");
    printf("========================\n");
    
    // Input details for 3 students
    for(int i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        
        printf("Name: ");
        gets(students[i].name);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        
        printf("City: ");
        getchar();  // Clear input buffer
        gets(students[i].addr.city);
        
        printf("Pincode: ");
        scanf("%d", &students[i].addr.pincode);
        getchar();  // Clear input buffer for next iteration
    }
    
    // Display all students' details
    printf("\nStudent Records:\n");
    printf("===============\n");
    
    for(int i = 0; i < 3; i++) {
        printf("\nStudent %d:", i + 1);
        displayStudent(students[i]);
    }
    
    // Additional analysis
    printf("\nAnalysis:\n");
    printf("========\n");
    
    // Find students from same city
    printf("Students from same city:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(strcmp(students[i].addr.city, students[j].addr.city) == 0) {
                printf("- %s and %s are from %s\n",
                       students[i].name, students[j].name, students[i].addr.city);
            }
        }
    }
    
    // Find students with consecutive roll numbers
    printf("\nStudents with consecutive roll numbers:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i != j && students[i].roll_number == students[j].roll_number - 1) {
                printf("- %s (Roll: %d) and %s (Roll: %d)\n",
                       students[i].name, students[i].roll_number,
                       students[j].name, students[j].roll_number);
            }
        }
    }
    
    return 0;
}
