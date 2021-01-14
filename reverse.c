#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    printf("Please enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(temp!=0){
        r = temp%10;
        sum = sum *10 + r;
        temp = 9/10;
    }
    printf("The revers is: %d",sum);
    getch();
}
