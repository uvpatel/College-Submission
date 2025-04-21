#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to count lines in a file
int countLines(FILE *file) {
    int count = 0;
    char ch;
    
    while((ch = fgetc(file)) != EOF) {
        if(ch == '\n') count++;
    }
    
    // Reset file pointer to beginning
    rewind(file);
    return count;
}

// Function to merge files alternately
void mergeAlternate(FILE *file1, FILE *file2, FILE *output) {
    char line[1000];
    int eof1 = 0, eof2 = 0;
    
    while(!eof1 || !eof2) {
        // Read and write from first file
        if(!eof1) {
            if(fgets(line, sizeof(line), file1) != NULL) {
                fputs(line, output);
            } else {
                eof1 = 1;
            }
        }
        
        // Read and write from second file
        if(!eof2) {
            if(fgets(line, sizeof(line), file2) != NULL) {
                fputs(line, output);
            } else {
                eof2 = 1;
            }
        }
    }
}

// Function to merge files sequentially
void mergeSequential(FILE *file1, FILE *file2, FILE *output) {
    char line[1000];
    
    // Copy first file
    while(fgets(line, sizeof(line), file1) != NULL) {
        fputs(line, output);
    }
    
    // Add a newline between files if needed
    if(line[strlen(line)-1] != '\n') {
        fputs("\n", output);
    }
    
    // Copy second file
    while(fgets(line, sizeof(line), file2) != NULL) {
        fputs(line, output);
    }
}

// Program 5: File merge utility
int main() {
    FILE *file1, *file2, *output;
    char filename1[100], filename2[100], output_file[100];
    int choice;
    
    printf("File Merge Utility\n");
    printf("=================\n");
    
    // Get filenames
    printf("Enter first input filename: ");
    gets(filename1);
    
    printf("Enter second input filename: ");
    gets(filename2);
    
    printf("Enter output filename: ");
    gets(output_file);
    
    // Open input files
    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");
    
    if(file1 == NULL || file2 == NULL) {
        printf("Error: Unable to open input file(s)!\n");
        return 1;
    }
    
    // Display file information
    printf("\nFile Information:\n");
    printf("================\n");
    printf("File 1: %s (%d lines)\n", filename1, countLines(file1));
    printf("File 2: %s (%d lines)\n", filename2, countLines(file2));
    
    // Get merge type
    printf("\nMerge Options:\n");
    printf("1. Alternate merge (line by line)\n");
    printf("2. Sequential merge (first file followed by second)\n");
    printf("\nEnter your choice (1-2): ");
    scanf("%d", &choice);
    
    // Open output file
    output = fopen(output_file, "w");
    if(output == NULL) {
        printf("Error: Unable to create output file!\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    
    // Perform merge based on choice
    printf("\nMerging files...\n");
    
    if(choice == 1) {
        mergeAlternate(file1, file2, output);
        printf("Files merged alternately.\n");
    } else if(choice == 2) {
        mergeSequential(file1, file2, output);
        printf("Files merged sequentially.\n");
    } else {
        printf("Invalid choice!\n");
    }
    
    // Close all files
    fclose(file1);
    fclose(file2);
    fclose(output);
    
    // Display result
    printf("\nMerge completed successfully!\n");
    printf("Output saved to: %s\n", output_file);
    
    // Display merged file contents
    printf("\nMerged File Contents:\n");
    printf("===================\n");
    
    output = fopen(output_file, "r");
    char line[1000];
    int line_num = 1;
    
    while(fgets(line, sizeof(line), output) != NULL) {
        printf("%3d | %s", line_num++, line);
    }
    
    fclose(output);
    
    return 0;
}
