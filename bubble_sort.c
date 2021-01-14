#include<stdio.h>
#include<stdlib.h>
void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    int i,n,j,temp;
    int *a;
    scanf("%d",&n);
    a = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    bubble_sort(a,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
