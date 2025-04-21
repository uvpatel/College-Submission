#include <stdio.h>
#include <stdlib.h>

// Program 1: Write data to a file
int main() {
    FILE *file;
    char filename[100];
    char content[1000];
    char choice;
    
    printf("File Writing Demonstration\n");
    printf("========================\n");
    
    // Get filename from user
    printf("Enter filename to create (e.g., data.txt): ");
    gets(filename);
    
    // Open file in write mode
    file = fopen(filename, "w");
    
    // Check if file was created successfully
    if(file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    
    printf("\nFile '%s' created successfully!\n", filename);
    
    do {
        // Get content from user
        printf("\nEnter text to write (max 1000 characters):\n");
        gets(content);
        
        // Write content to file
        fprintf(file, "%s\n", content);
        
        // Ask if user wants to write more
        printf("\nDo you want to write more? (y/n): ");
        scanf(" %c", &choice);
        getchar();  // Clear input buffer
        
    } while(choice == 'y' || choice == 'Y');
    
    // Close file
    fclose(file);
    
    // Verify file contents
    printf("\nVerifying file contents:\n");
    printf("=====================\n");
    
    // Reopen file in read mode
    file = fopen(filename, "r");
    if(file == NULL) {
        printf("Error opening file for verification!\n");
        return 1;
    }
    
    printf("Contents of %s:\n", filename);
    printf("----------------\n");
    
    // Read and display file contents
    while(fgets(content, sizeof(content), file) != NULL) {
        printf("%s", content);
    }
    
    // Close file again
    fclose(file);
    
    printf("\nFile operations completed successfully!\n");
    printf("File saved as: %s\n", filename);
    
    return 0;
}
