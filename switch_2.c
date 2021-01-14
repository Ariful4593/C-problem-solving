#include<stdio.h>
int main()
{
    int choice;
    double temp,convertedTemp;
    printf("Temperature conversion Menu: \n");
    printf("1. Fahrenheit to Celsius.\n");
    printf("2. Fahrenheit to Celsius.\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the Fahrenheit Temperature:");
        scanf("%lf",&temp);
        convertedTemp = (temp-32)/1.8;
        printf("Celsius is: %lf\n",convertedTemp);
        break;

    case 2:
        printf("Enter the Celsius Temperature:");
        scanf("%lf",&temp);
        convertedTemp = (1.8*temp)+32;
        printf("Fahrenheit is: %lf\n",convertedTemp);
        break;

    default:
        printf("Not a correct option.");
    }
    getch();
}
