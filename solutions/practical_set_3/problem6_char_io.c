#include <stdio.h>
#include <conio.h>

// Program 6: Demonstrate character input/output functions
int main() {
    char ch;
    
    printf("Demonstration of getch() and putch():\n");
    printf("====================================\n");
    printf("Press any key (it will be shown immediately): ");
    ch = getch();  // Gets character without echo
    printf("\nYou pressed: ");
    putch(ch);     // Displays the character
    printf("\n\n");
    
    printf("Demonstration of getchar() and putchar():\n");
    printf("=======================================\n");
    printf("Enter a character (press Enter after typing): ");
    ch = getchar();  // Gets character with echo, waits for Enter
    printf("You entered: ");
    putchar(ch);     // Displays the character
    printf("\n");
    
    return 0;
}
