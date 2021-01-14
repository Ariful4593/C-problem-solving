#include<stdio.h>
int main()
{
    int array[10],num,i,min;
    printf("Please enter size of array: ");
    scanf("%d",&num);

    printf("Please enter value of array:\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    min = array[0];
    for(i=1;i<num;i++)
    {
        if(min>array[i])
        {
            min = array[i];
        }

    }
    printf("Minimum value is: %d\n",min);
}
