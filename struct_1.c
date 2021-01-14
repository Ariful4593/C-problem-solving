
#include<stdio.h>

int main()
{
    struct student{
        int id;
        char *name;
        int roll;
        char *dept;
    };

    struct student one;

    one.id = 1;
    one.name = "Ariful Islam";
    one.roll = 171966;
    one.dept = "Computer Technology";

    printf("ID: %d\n",one.id);
    printf("Name: %s\n",one.name);
    printf("Roll No: %d\n",one.roll);
    printf("Department: %s\n",one.dept);

    int a=10,b=20,c;
    c = a + b;
    printf("%d\n",c)
}
