#include<stdio.h>

int main()
{
    int i,n,ar[20],value,results,mid,low,hig,loc=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Please enter searching value: ");
    scanf("%d",&value);
    printf("%d is found at Index %d\n",n,binary_search(ar,n,value));
    printf("It is the %d element\n",n);

}
int binary_search(int ar[],int n,int value)
{
    int mid,low=0,hig=n-1,loc=1,i;
    while(low<=hig)
    {
        mid = ((low+hig)/2);
        if(ar[mid]==value)
        {
            loc = i;
            return mid,loc;
        }
        if(value<ar[mid])
        {
            hig=mid-1;
        }
        else{
            low=mid+1;
        }
    }
        if(low>hig)
    {
        printf("%d element not found\n",value);
    }
    else{
        printf("%d is found in the array. It is the %d element",ar[mid],mid);
    }


    return -1;
}
