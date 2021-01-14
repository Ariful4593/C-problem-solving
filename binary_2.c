#include<stdio.h>
int main()
{
    int i,n,array[10],first,last,mid,value;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter searching value: ");
    scanf("%d",&value);
    first = 0;
    last = n-1;
    while(first<=last)
    {
        mid = (first + last)/2;
        if(array[mid]==value)
        {
            break;
        }
        else if(value<mid)
        {
            last = mid-1;
        }
        else{
            first = mid + 1;
        }
    }
    if(first>last)
    {
        printf("Search not possible\n");
    }
    else{
        printf("%d th value is found in %d th loc",array[mid],mid+1);
    }
}
