#include<stdio.h>
int main()
{
    int year,result;
    printf("Please enter year: ");
    scanf("%d",&year);
    if(year%400==0)
    {
        printf("Leaf year");
    }
    else if(year%4==0 && year%100!=0)
    {
        printf("Leaf Year");
    }
    else{
        printf("Not leaf year");
    }
    getch();
}
