#include<stdio.h>
int prime(int n)
{
    int i,count=0,j;
    for(i=2;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    prime(n);
}
