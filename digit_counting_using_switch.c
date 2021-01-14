#include<stdio.h>
int main()
{
    int digit,number,count=1,counting=0;
    printf("1. What you want to show counting digit for loop?\n");
    printf("2. What you want to show counting digit while loop?\n");
    printf("Please enter a choice: ");
    scanf("%d",&digit);
    switch(digit)
    {
    case 1:
        printf("Please enter a number for loop counting..");
        scanf("%d",&number);
        for(count;count<=number;count++)
        {
            number = number/10;
        }
        printf("Your forLoop result is: %d\n",count);
        break;
    case 2:
        printf("Please enter a number for while loop counting..");
        scanf("%d",&number);
        while(number!=0){
            number = number / 10;
            ++counting;
        }
        printf("Your whileLoop Result is: %d\n",counting);
    }
}

