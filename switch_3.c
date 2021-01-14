#include<stdio.h>
int main()
{
    int choice,number1,number2,sum;

    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiple\n");
    printf("4. Divide\n");

    printf("Please choice your opinion: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Please enter sum number1: ");
        scanf("%d",&number1);
        printf("Please enter sum number2: ");
        scanf("%d",&number2);
        sum = number1 + number2;
        printf("The sum is: %d",sum);
        break;

    case 2:
        printf("Please enter sub number1: ");
        scanf("%d",&number1);
        printf("Please enter sub number2: ");
        scanf("%d",&number2);
        sum = number1 - number2;
        printf("The sub is: %d",sum);
        break;

    case 3:
        printf("Please enter multiple number1: ");
        scanf("%d",&number1);
        printf("Please enter multiple number2: ");
        scanf("%d",&number2);
        sum = number1 * number2;
        printf("The multiple is: %d",sum);
        break;

    case 4:
        printf("Please enter Divide number1: ");
        scanf("%d",number1);
        printf("Please enter Divide number2: ");
        scanf("%d",number2);
        sum = number1 / number2;
        printf("The Divide is: %d",sum);
        break;
    }

    getch();
}
