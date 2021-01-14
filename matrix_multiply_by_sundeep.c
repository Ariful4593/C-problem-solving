#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2,a[10][10],b[10][10],c[10][10],sum=0;
    printf("Enter R & C for A matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter R & C for B matrix:\n");
    scanf("%d %d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter value of A matrix:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("A[%d][%d]",i,j);
                scanf("%d",&a[i][j]);
            }
            printf("\n");
        }
        printf("\n");


        printf("Enter value of B matrix:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("B[%d][%d]",i,j);
                scanf("%d",&b[i][j]);
            }
            printf("\n");
        }
        printf("\n");


        printf("First Matrix: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }

        printf("Second Matrix: \n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",b[i][j]);
            }
            printf("\n");
        }

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++)
                {
                    sum = sum+a[i][k]*b[k][j];
                }
                c[i][j] =sum;
                sum=0;
            }
        }
        printf("Resultant: \n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }

    }
}
