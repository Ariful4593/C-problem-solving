#include<stdio.h>
int main()
{
    int i,n,first,last,mid,value,array[10],flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    first = 0;
    last = n-1;
    printf("Enter searching value: ");
    scanf("%d",&value);

    while(first<=last)
    {
        mid = (first+last)/2;
        if(array[mid] == value)
        {
            flag = 1;
            break;
        }
        else if(value<array[mid])
        {
            last = mid - 1;
        }
        else{
            first = mid+1;
        }
    }
    if(flag == 0)
    {
        printf("Sorry %d value We are not found\n",value);
    }
    else{
        printf("Your %d value is found in %d th location\n",value,mid);
    }
}
