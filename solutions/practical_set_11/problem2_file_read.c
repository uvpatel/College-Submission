#include <stdio.h>
#include <stdlib.h>

// Program 2: Read and analyze file contents
int main() {
    FILE *file;
    char filename[100];
    char ch;
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;  // Flag to track if we're inside a word
    
    printf("File Reading and Analysis\n");
    printf("=======================\n");
    
    // Get filename from user
    printf("Enter filename to read: ");
    gets(filename);
    
    // Open file in read mode
    file = fopen(filename, "r");
    
    // Check if file exists
    if(file == NULL) {
        printf("Error: File '%s' not found!\n", filename);
        return 1;
    }
    
    printf("\nAnalyzing file contents...\n\n");
    
    // Read file character by character
    while((ch = fgetc(file)) != EOF) {
        chars++;  // Count characters
        
        // Count words
        if(ch == ' ' || ch == '\n' || ch == '\t') {
            if(in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
        
        // Count lines
        if(ch == '\n') {
            lines++;
        }
    }
    
    // Account for last word if file doesn't end with whitespace
    if(in_word) {
        words++;
    }
    
    // Account for last line if file doesn't end with newline
    if(chars > 0 && !lines) {
        lines = 1;
    }
    
    // Display file contents
    printf("File Contents:\n");
    printf("-------------\n");
    
    // Reset file pointer to beginning
    rewind(file);
    
    // Read and display file contents with line numbers
    char line[1000];
    int line_num = 1;
    
    while(fgets(line, sizeof(line), file) != NULL) {
        printf("%3d | %s", line_num++, line);
    }
    
    // Display analysis
    printf("\nFile Analysis:\n");
    printf("=============\n");
    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);
    
    // Calculate averages
    printf("\nAverages:\n");
    printf("=========\n");
    printf("Characters per line: %.2f\n", (float)chars/lines);
    printf("Words per line: %.2f\n", (float)words/lines);
    
    // Close file
    fclose(file);
    
    return 0;
}
