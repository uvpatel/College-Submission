#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define student structure
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

// Function to add student record
void addStudent(FILE *file) {
    struct Student student;
    
    printf("\nEnter Student Details:\n");
    printf("====================\n");
    
    printf("Roll No: ");
    scanf("%d", &student.roll_no);
    
    printf("Name: ");
    getchar();  // Clear input buffer
    gets(student.name);
    
    printf("Marks: ");
    scanf("%f", &student.marks);
    
    // Write to file
    fwrite(&student, sizeof(struct Student), 1, file);
    printf("\nStudent record added successfully!\n");
}

// Function to display all records
void displayRecords(FILE *file) {
    struct Student student;
    int count = 0;
    
    printf("\nStudent Records:\n");
    printf("===============\n");
    printf("Roll No  Name                  Marks\n");
    printf("-----------------------------------\n");
    
    // Reset file pointer to beginning
    rewind(file);
    
    // Read and display all records
    while(fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("%-8d %-20s %.2f\n", 
               student.roll_no, student.name, student.marks);
        count++;
    }
    
    if(count == 0) {
        printf("No records found!\n");
    } else {
        printf("\nTotal records: %d\n", count);
    }
}

// Function to search for a student
void searchStudent(FILE *file) {
    int roll_no;
    struct Student student;
    int found = 0;
    
    printf("\nEnter roll number to search: ");
    scanf("%d", &roll_no);
    
    // Reset file pointer to beginning
    rewind(file);
    
    // Search for student
    while(fread(&student, sizeof(struct Student), 1, file) == 1) {
        if(student.roll_no == roll_no) {
            printf("\nStudent Found:\n");
            printf("=============\n");
            printf("Roll No: %d\n", student.roll_no);
            printf("Name: %s\n", student.name);
            printf("Marks: %.2f\n", student.marks);
            found = 1;
            break;
        }
    }
    
    if(!found) {
        printf("\nStudent with roll number %d not found!\n", roll_no);
    }
}

// Program 3: Student Record Management System
int main() {
    FILE *file;
    int choice;
    
    printf("Student Record Management System\n");
    printf("==============================\n");
    
    // Open file in binary mode for both reading and writing
    file = fopen("students.dat", "ab+");
    
    if(file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    do {
        printf("\nMenu:\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addStudent(file);
                break;
            case 2:
                displayRecords(file);
                break;
            case 3:
                searchStudent(file);
                break;
            case 4:
                printf("\nExiting program...\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while(choice != 4);
    
    // Close file
    fclose(file);
    
    return 0;
}
