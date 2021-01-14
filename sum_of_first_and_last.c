#include<stdio.h>
int main()
{
    int i,n,first_digit,last_digit,sum;
    scanf("%d",&n);
    last_digit = n%10;
    printf("%d\n",last_digit);
    first_digit = n/10;
    while(n>=10)
    {
        n = n / 10;
    }
    first_digit = n;
    sum = first_digit+last_digit;
    printf("%d",sum);

}
