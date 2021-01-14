#include<stdio.h>

int main()
{
    struct student{
        int id;
        char name[40];
        int roll;
        char dept[40];
    };

    struct student one;

    printf("Please enter your ID: ");
    scanf("%d",&one.id);
    printf("Please enter your Name: ");
    scanf("%s",&one.name);
    printf("Please enter your Roll: ");
    scanf("%d",&one.roll);
    printf("Please enter your department: ");
    scanf("%s",&one.dept);

    printf("\n\n");

    printf("ID: %d\n",one.id);
    printf("Name: %s\n",one.name);
    printf("Roll: %d\n",one.roll);
    printf("Department: %s\n",one.dept);


}
