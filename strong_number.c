#include<stdio.h>
int main()
{
    int num,temp,sum=0,r,fact,i;
    printf("Please enter a number: ");
    scanf("%d",&num);
    temp = num;
    while(temp!=0)
    {
        r=temp%10;
        fact = 1;
        for(i=1;i<=r;i++)
        {
            fact = fact * i;
        }
        sum= sum + fact;
        temp = temp/10;
    }
    if(num==sum)
    {
        printf("It is Strong Number.");
    }
    else{
        printf("It is Not Strong number.");
    }
}

