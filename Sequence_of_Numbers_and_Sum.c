#include<stdio.h>
int main()
{
    int m,n,sum=0,temp,i;
    scanf("%d %d",&m,&n);
    if(m==0 && n || n==0 && m)
    {

    }
    else if(m>n)
    {
        for(i=n;i<=m;i++)
        {
            sum = sum + i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);

    }
    if(m<n)
    {

    }
}
