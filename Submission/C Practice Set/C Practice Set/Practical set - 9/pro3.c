#include <stdio.h>
/*Write a program using a nested structure where Student contains fields like name, roll
number, and a nested structure Address that contains city and pincode. Accept and
display details for 3 students*/

struct student
{
    int roll_no;
    char name[20];
    struct student_address
    {
        char city[20];
        int pincode;

    }s1;
    
};

int main(){
    struct student s1 = {31,"Urvil",{"anklav",361305}};
    printf("%d \n %s \n %d \n%s \n %d",s1.roll_no,s1.name,s1.s1.city,s1.s1.pincode);

    
    return 0;
}