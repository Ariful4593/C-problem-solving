#include<stdio.h>
int main()
{
    int num,sum=0,temp,r;
    printf("Please enter a number: ");
    scanf("%d",&num);

    temp = num;
    while(temp!=0)
    {
        r = temp%10;
        sum = sum + r*r*r;
        temp = temp/10;
    }
    printf("Armstrong is: %d\n",sum);
    if(num==sum)
    {
        printf("It is Armstrong number.");
    }
    else{
        printf("It is Not Armstrong number.");
    }
}
