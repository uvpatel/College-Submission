#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to copy file contents
int copyFile(const char *source, const char *destination) {
    FILE *src, *dest;
    char buffer[1024];
    size_t bytes;
    
    // Open source file in read mode
    src = fopen(source, "rb");
    if(src == NULL) {
        printf("Error: Unable to open source file!\n");
        return 0;
    }
    
    // Open destination file in write mode
    dest = fopen(destination, "wb");
    if(dest == NULL) {
        printf("Error: Unable to create destination file!\n");
        fclose(src);
        return 0;
    }
    
    // Copy contents
    while((bytes = fread(buffer, 1, sizeof(buffer), src)) > 0) {
        fwrite(buffer, 1, bytes, dest);
    }
    
    // Close files
    fclose(src);
    fclose(dest);
    return 1;
}

// Function to display file information
void displayFileInfo(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if(file == NULL) {
        printf("Error: Unable to open file %s!\n", filename);
        return;
    }
    
    // Get file size
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    
    // Get file modification time
    struct stat filestat;
    stat(filename, &filestat);
    
    printf("File: %s\n", filename);
    printf("Size: %ld bytes\n", size);
    printf("Last modified: %s", ctime(&filestat.st_mtime));
    
    fclose(file);
}

// Program 4: File copy utility
int main() {
    char source[100], destination[100];
    clock_t start, end;
    double cpu_time_used;
    
    printf("File Copy Utility\n");
    printf("================\n");
    
    // Get source filename
    printf("Enter source filename: ");
    gets(source);
    
    // Get destination filename
    printf("Enter destination filename: ");
    gets(destination);
    
    // Display source file info
    printf("\nSource File Information:\n");
    printf("=====================\n");
    displayFileInfo(source);
    
    // Copy file and measure time
    printf("\nCopying file...\n");
    start = clock();
    
    if(copyFile(source, destination)) {
        end = clock();
        cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        
        printf("\nFile copied successfully!\n");
        printf("Time taken: %.2f seconds\n", cpu_time_used);
        
        // Display destination file info
        printf("\nDestination File Information:\n");
        printf("==========================\n");
        displayFileInfo(destination);
        
        // Verify if files are identical
        FILE *src = fopen(source, "rb");
        FILE *dest = fopen(destination, "rb");
        
        if(src && dest) {
            int ch1, ch2;
            int identical = 1;
            
            while(((ch1 = fgetc(src)) != EOF) && ((ch2 = fgetc(dest)) != EOF)) {
                if(ch1 != ch2) {
                    identical = 0;
                    break;
                }
            }
            
            if(identical && (fgetc(src) == EOF) && (fgetc(dest) == EOF)) {
                printf("\nVerification: Files are identical!\n");
            } else {
                printf("\nWarning: Files are not identical!\n");
            }
            
            fclose(src);
            fclose(dest);
        }
    } else {
        printf("\nError: File copy failed!\n");
    }
    
    return 0;
}
