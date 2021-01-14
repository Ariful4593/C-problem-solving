#include<stdio.h>

int main()
{
    int n,i,ar[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=min_value(ar,n);
    printf("Smallest value i: %d\n",min);

    return 0;
}
int min_value(int ar[],int n)
{
    int min=ar[0],i;
    for(i=0;i<n;i++)
    {
        if(ar[i]<min)
        {
            min = ar[i];
        }
    }
    return min;
}
