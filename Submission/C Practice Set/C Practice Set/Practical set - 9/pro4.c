#include <stdio.h>

struct student
{
    char name[20];
    int roll_no;
    float marks;
};

void display();

void display(){
    struct student s1[3];
    printf("Enter info: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%f\n %s \n%d ",&s1[i].marks,&s1[i].name,&s1[i].roll_no);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%f\n %s \n%d ",s1[i].marks,s1[i].name,s1[i].roll_no);
    }
    return 0;
}
int main()
{
    struct student s1[3];
        printf("Enter info: ");
        for (int i = 0; i < 3; i++)
        {
            scanf("%f\n %s \n%d ",&s1[i].marks,&s1[i].name,&s1[i].roll_no);
        }
        for (int i = 0; i < 3; i++)
        {
            printf("%f\n %s \n%d ",s1[i].marks,s1[i].name,s1[i].roll_no);
        }
    

    return 0;
}