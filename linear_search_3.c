#include<stdio.h>
int main()
{
    int array[10],num,i,search;
    printf("Please enter size of array: ");
    scanf("%d",&num);

    printf("Please enter value of array: \n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Please enter search value: ");
    scanf("%d",&search);

    for(i=0;i<num;i++)
    {
        if(array[i]==search)
        {
            printf("%d at present %d location.\n",search,i+1);
            break;
        }
    }
    if(array[i]!=search)
    {
        printf("Your item not found in this array.");
    }
}
