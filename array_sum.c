#include<stdio.h>
int main()
{
    int array[5],i,num,sum=0;
    printf("Please enter size of array: ");
    scanf("%d",&num);

    printf("Please enter value of array: \n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<num;i++)
    {
        sum = sum + array[i];
    }
    printf("The results is: %d\n",sum);
}
