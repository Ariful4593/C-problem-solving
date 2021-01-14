#include<stdio.h>
int main()
{
    int row,col,a[3][4],i,j,b[3][4];

    printf("Enter element of A matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    printf("Enter element of B matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
      printf("A = ");
    for(i=0;i<3;i++)
    {
        printf("\t\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("B = ");
    for(i=0;i<3;i++)
    {
        printf("\t\t");
        for(j=0;j<4;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
