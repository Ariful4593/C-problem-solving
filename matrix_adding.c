#include<stdio.h>
int main()
{
    int row,col,a[10][10],i,j,b[10][10],c[10][10];

    printf("Please enter row: ");
    scanf("%d",&row);
    printf("Please enter col: ");
    scanf("%d",&col);
    printf("Enter element of A matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    printf("Enter element of B matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
      printf("A = ");
    for(i=0;i<row;i++)
    {
        printf("\t\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    printf("B = ");
    for(i=0;i<row;i++)
    {
        printf("\t\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
     printf("\n");
     printf("\n");

    printf("Adding the matrix = ");
    for(i=0;i<row;i++)
    {
        printf("\t\t");
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j] + b[i][j];
        }
        printf("\n");
    }

    printf("Printing C matrix = ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
