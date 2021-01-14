#include<stdio.h>
int main()
{
    int i,n,count,j;
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                printf("%d ",i);
            }
        }
    }

}

