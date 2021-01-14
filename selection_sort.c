#include<stdio.h>
#include<stdlib.h>
void select(int a[], int n)
{
    int i,j,min,tem;
    for(i=0;i<n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            tem = a[i];
            a[i] = a[min];
            a[min] = tem;
        }
    }
}
int main()
{
    int i,n,min,tem,j;
    int *a;
    scanf("%d",&n);
    a = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    select(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    free(a);
}
