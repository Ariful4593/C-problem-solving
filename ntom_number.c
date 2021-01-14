#include<stdio.h>
int main()
{
    int i,n,sum=0,average;
    printf("Please enter value of N: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i;

        if(sum%2 == 0)
        {
            printf("All even number.");
            printf("%d\n",sum);
        }

    }
}
