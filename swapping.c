#include<stdio.h>
int main()
{
    int number1,number2,temp;
    printf("Please enter first number : ");
    scanf("%d",&number1);
    printf("Please enter second number : ");
    scanf("%d",&number2);
    temp = number1;
    number1 = number2;
    number2 = temp;
    printf("After swapping : %d\n",number1);
    printf("After swapping : %d\n",number2);

}
