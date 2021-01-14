#include<stdio.h>
int main()
{
    int n,fact=1,i;
    printf("Please enter factorial Value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
        printf("%d\n",fact);
    }

}
