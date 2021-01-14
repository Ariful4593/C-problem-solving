#include<stdio.h>
int main()
{
    int r,sum=0,temp,num;
    printf("Please enter a number: ");
    scanf("%d",&num);

    temp = num;
    while(temp!=0)
    {
        r = temp%10;
        sum = sum * 10 + r;
        temp = temp/10;
    }
    printf("After reverse number: %d\n",sum);
    if(num==sum)
    {
        printf("It is palindrome number.");
    }
    else{
        printf("It is Not palindrome number.");
    }

}
