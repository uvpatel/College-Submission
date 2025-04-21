#include <stdio.h>

// Program 4: Movie theatre ticket counter
int main() {
    int ticketNumber = 1;
    char choice;
    
    printf("Movie Theatre Ticket Counter\n");
    printf("===========================\n");
    
    do {
        printf("\nCurrent ticket number: %d\n", ticketNumber);
        printf("Menu:\n");
        printf("I - Issue a ticket\n");
        printf("R - Return a ticket\n");
        printf("Q - Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        
        switch(choice) {
            case 'I':
            case 'i':
                ticketNumber++;
                printf("Ticket issued!\n");
                break;
                
            case 'R':
            case 'r':
                if(ticketNumber > 1) {
                    ticketNumber--;
                    printf("Ticket returned!\n");
                } else {
                    printf("Error: No tickets to return!\n");
                }
                break;
                
            case 'Q':
            case 'q':
                printf("Thank you for using the ticket system!\n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 'Q' && choice != 'q');
    
    return 0;
}
