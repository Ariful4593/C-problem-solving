#include<stdio.h>
int main()
{
    colPattern();
    rowPattern();
}
int colPattern()
{
    int num,row,col;
    printf("Please enter a number: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
            printf("\n");
    }
}
int rowPattern()
{
    int num,row,col;
    printf("Please enter a number: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }
            printf("\n");
    }
}

