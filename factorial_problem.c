#include<stdio.h>
void test(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
        {
            fact = fact*i;

        }
        printf("%d",fact);
}
int main()
{
    int num,t,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&num);
        test(num);
        printf("\n");

    }
}

