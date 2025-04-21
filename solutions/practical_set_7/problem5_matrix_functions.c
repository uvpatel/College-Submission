#include <stdio.h>

#define MAX_SIZE 10

// Function to input matrix elements
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add matrices
void addMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], 
                 int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to multiply matrices
int multiplyMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], 
                     int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int cols2) {
    // Check if multiplication is possible
    if(cols1 != rows1) {
        return 0;  // Return false if not possible
    }
    
    // Perform multiplication
    for(int i = 0; i < rows1; i++) {
        for(int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for(int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    return 1;  // Return true if successful
}

// Function to transpose matrix
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], 
                    int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

// Program 5: Matrix Functions
int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    int choice;
    
    printf("Matrix Operations\n");
    printf("================\n");
    
    do {
        printf("\nOperations:\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Multiplication\n");
        printf("3. Matrix Transpose\n");
        printf("4. Exit\n");
        
        printf("\nEnter your choice (1-4): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("\nMatrix Addition\n");
                printf("--------------\n");
                
                printf("Enter dimensions of matrices (rows columns): ");
                scanf("%d %d", &rows1, &cols1);
                
                if(rows1 > MAX_SIZE || cols1 > MAX_SIZE) {
                    printf("Error: Maximum size exceeded!\n");
                    break;
                }
                
                printf("\nEnter elements of first matrix:\n");
                inputMatrix(mat1, rows1, cols1);
                
                printf("\nEnter elements of second matrix:\n");
                inputMatrix(mat2, rows1, cols1);
                
                printf("\nFirst Matrix:\n");
                displayMatrix(mat1, rows1, cols1);
                
                printf("\nSecond Matrix:\n");
                displayMatrix(mat2, rows1, cols1);
                
                addMatrices(mat1, mat2, result, rows1, cols1);
                
                printf("\nResultant Matrix (Sum):\n");
                displayMatrix(result, rows1, cols1);
                break;
                
            case 2:
                printf("\nMatrix Multiplication\n");
                printf("-------------------\n");
                
                printf("Enter dimensions of first matrix (rows columns): ");
                scanf("%d %d", &rows1, &cols1);
                
                printf("Enter dimensions of second matrix (rows columns): ");
                scanf("%d %d", &rows2, &cols2);
                
                if(rows1 > MAX_SIZE || cols1 > MAX_SIZE || 
                   rows2 > MAX_SIZE || cols2 > MAX_SIZE) {
                    printf("Error: Maximum size exceeded!\n");
                    break;
                }
                
                if(cols1 != rows2) {
                    printf("Error: Matrices cannot be multiplied!\n");
                    break;
                }
                
                printf("\nEnter elements of first matrix:\n");
                inputMatrix(mat1, rows1, cols1);
                
                printf("\nEnter elements of second matrix:\n");
                inputMatrix(mat2, rows2, cols2);
                
                printf("\nFirst Matrix:\n");
                displayMatrix(mat1, rows1, cols1);
                
                printf("\nSecond Matrix:\n");
                displayMatrix(mat2, rows2, cols2);
                
                multiplyMatrices(mat1, mat2, result, rows1, cols1, cols2);
                
                printf("\nResultant Matrix (Product):\n");
                displayMatrix(result, rows1, cols2);
                break;
                
            case 3:
                printf("\nMatrix Transpose\n");
                printf("---------------\n");
                
                printf("Enter dimensions of matrix (rows columns): ");
                scanf("%d %d", &rows1, &cols1);
                
                if(rows1 > MAX_SIZE || cols1 > MAX_SIZE) {
                    printf("Error: Maximum size exceeded!\n");
                    break;
                }
                
                printf("\nEnter elements of matrix:\n");
                inputMatrix(mat1, rows1, cols1);
                
                printf("\nOriginal Matrix:\n");
                displayMatrix(mat1, rows1, cols1);
                
                transposeMatrix(mat1, result, rows1, cols1);
                
                printf("\nTransposed Matrix:\n");
                displayMatrix(result, cols1, rows1);
                break;
                
            case 4:
                printf("\nThank you for using Matrix Functions!\n");
                break;
                
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
        
    } while(choice != 4);
    
    return 0;
}
