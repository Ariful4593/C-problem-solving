#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
        int id;
        char name[40];
        long long Roll;
        char Department[40];
    };
    struct student one;
    //one.id = 1;
    printf("Please enter your id: ");
    scanf("%d",&one.id);
    //one.name = "Ariful Islam";
    printf("Please enter your name: ");
    scanf(" %[^\n]", one.name);

    printf("Enter your Roll number: ");
    scanf("%lld",&one.Roll);

    printf("Enter Your Department: ");
    scanf(" %[^\n]",one.Department);

    printf("\n");
    printf("National Institute of Technology\n");
    printf("ID: %d\n",one.id);
    printf("Name: %s\n",one.name);
    printf("Roll: %lld\n",one.Roll);
    printf("Department: %s\n",one.Department);

    return 0;
}
