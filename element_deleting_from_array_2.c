#include<stdio.h>
int main()
{
    int i,position=3,array[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=position;i<5;i++)
    {
        array[i] = array[i + 1];
    }
    printf("\n");
    for(i=0;i<4;i++)
    {
        printf("%d\n",array[i]);
    }
}
