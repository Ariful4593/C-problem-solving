#include<stdio.h>

int main()

{
    int n,array[10],i,loc;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int max = find_max(array,n);
    printf("\n");
    printf("Maximum value is: %d\n",max);

    return 0;
}
int find_max(int ar[], int n)
{
    int i,max,loc = 0;
    max = ar[0];
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max = ar[i];
            loc = i;
        }
    }
    return max;
}
