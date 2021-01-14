#include<stdio.h>
int main()
{
    rowPattern();
    colPattern();
}
int rowPattern()
{
    int num,row,col;
    printf("Please enter a character: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+64);
        }
        printf("\n");
    }
}
int colPattern()
{
    int num,row,col;
    printf("Please enter a character: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+64);
        }
        printf("\n");
    }
}
