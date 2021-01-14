#include<stdio.h>
int main()
{
    int i,n,array[20],lb,ub,len;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n");
    lb = array[0];
    ub = array[n-1];
    len = (ub - lb)+1;
    printf("%d\n",len);
    /*/for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }*/
}
