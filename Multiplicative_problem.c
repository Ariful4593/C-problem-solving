#include<stdio.h>
void find_divisor(int num)
{
    int i;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}
int main()
{
    int i,T,n;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        printf("Case %d:", i);
        find_divisor(n);
    }
}

