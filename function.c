#include<stdio.h>


int main()
{
    int n,results;
    scanf("%d",&n);
    results = sum(n);
    printf("%d\n",results);
}
int sum(int n,int i)
{
    int add=0;
    for(i=0;i<=n;i++)
    {
        add = add+i;
    }
    return add;
}
