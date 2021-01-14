#include<stdio.h>
int main()
{
    int array[10],num,i,max,loc;
    printf("Please enter size of array: ");
    scanf("%d",&num);

    printf("Please enter value of array:\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    max = array[0];
    for(i=1;i<num;i++)
    {
        if(max<array[i])
        {
            max = array[i];
            loc = i+1;
        }

    }
    printf("Maximum value is: %d\n",max);
    printf("Maximum position is: %d\n",loc);
}
