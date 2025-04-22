#include <stdio.h>

int main(){
    int len;
    printf("Enter len of username: ");
    scanf("%d",&len);
    char username[len];

    printf("Enter username: ");
    scanf("%c",&username[len]);

    char userascii = (int)username;

    if (  userascii >97 &&userascii >65)
    {
        
    }
    
    
    return 0;
}