#include<stdio.h>
int main()
{
    binaryPatternCol();
    binaryPatternRow();
}
int binaryPatternCol()
{
    int num,row,col;
    printf("Please enter a number: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col%2);
        }
        printf("\n");
    }
}
int binaryPatternRow()
{
    int num,row,col;
    printf("Please enter a number: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row%2);
        }
        printf("\n");
    }
}
