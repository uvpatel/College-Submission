#include <stdio.h>

#define MAX_STUDENTS 50
#define MAX_DAYS 31

// Program 4: Student attendance tracking using 2D array
int main() {
    int attendance[MAX_STUDENTS][MAX_DAYS];
    int num_students, num_days;
    int i, j;
    
    printf("Student Attendance Tracking System\n");
    printf("================================\n");
    
    // Input number of students and days
    printf("Enter number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &num_students);
    printf("Enter number of days (max %d): ", MAX_DAYS);
    scanf("%d", &num_days);
    
    if(num_students <= 0 || num_students > MAX_STUDENTS || 
       num_days <= 0 || num_days > MAX_DAYS) {
        printf("Invalid input!\n");
        return 1;
    }
    
    // Input attendance data
    printf("\nEnter attendance data (1 for present, 0 for absent):\n");
    for(i = 0; i < num_students; i++) {
        printf("\nStudent %d:\n", i + 1);
        for(j = 0; j < num_days; j++) {
            do {
                printf("Day %d: ", j + 1);
                scanf("%d", &attendance[i][j]);
                if(attendance[i][j] != 0 && attendance[i][j] != 1) {
                    printf("Invalid input! Please enter 0 or 1.\n");
                }
            } while(attendance[i][j] != 0 && attendance[i][j] != 1);
        }
    }
    
    // Display attendance matrix
    printf("\nAttendance Matrix:\n");
    printf("=================\n");
    printf("        ");
    for(j = 0; j < num_days; j++) {
        printf("D%-2d ", j + 1);
    }
    printf("Total\n");
    
    // Print horizontal line
    for(j = 0; j < num_days + 2; j++) {
        printf("----");
    }
    printf("\n");
    
    // Print attendance data with totals
    for(i = 0; i < num_students; i++) {
        printf("Stud %-2d ", i + 1);
        int total = 0;
        for(j = 0; j < num_days; j++) {
            printf("%2d  ", attendance[i][j]);
            total += attendance[i][j];
        }
        printf("%3d\n", total);
    }
    
    // Calculate and display statistics
    printf("\nAttendance Statistics:\n");
    printf("====================\n");
    
    // Per student statistics
    for(i = 0; i < num_students; i++) {
        int present = 0;
        for(j = 0; j < num_days; j++) {
            if(attendance[i][j] == 1) present++;
        }
        float percentage = (float)present / num_days * 100;
        printf("Student %d: %d/%d days (%.1f%%)\n", 
               i + 1, present, num_days, percentage);
    }
    
    // Per day statistics
    printf("\nDaily Attendance:\n");
    for(j = 0; j < num_days; j++) {
        int present = 0;
        for(i = 0; i < num_students; i++) {
            if(attendance[i][j] == 1) present++;
        }
        float percentage = (float)present / num_students * 100;
        printf("Day %d: %d/%d students (%.1f%%)\n", 
               j + 1, present, num_students, percentage);
    }
    
    return 0;
}
