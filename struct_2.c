#include<stdio.h>
struct student{
        int id;
        char name[40];
        int roll;
        char dept[40];
    };
    struct sir{
        int id;
        char name[40];
        int roll;
        char dept[40];
    };
int main()
{
    struct sir nit;
    printf("Sir please enter your id: ");
    scanf("%d",&nit.id);
    printf("Your Id is : %d",nit.id);

    printf("\n\n");
    struct student one;
    printf("Please enter your id: ");
    scanf("%d",&one.id);
    printf("Please enter your name: ");
    scanf("%s",&one.name);
    printf("Please enter your Roll: ");
    scanf("%d",&one.roll);
    printf("Please enter your Department: ");
    scanf("%s",one.dept);

    printf("\n\n");

    printf("Your id no is : %d\n",one.id);
    printf("Your name is: %s\n",one.name);
    printf("Your Roll NO is: %d\n",one.roll);
    printf("Your Department is: %s\n",one.dept);
}
