#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,f[10][10],s[10][10],r[10][10],i,j,k,sum=0;

    printf("Enter first Matrix:\n");
    scanf("%d %d",&r1,&c1);

    printf("Enter second Matrix:\n");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!\n");
        printf("Enter first Matrix:\n");
        scanf("%d %d",&r1,&c2);

        printf("Enter second Matrix:\n");
        scanf("%d %d",&r2,&c2);
    }
    printf("Enter first Matrix:\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&f[i][j]);
        }
        printf("\n");
    }
    printf("Enter second Matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&s[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {

                sum = sum + f[i][k]*s[k][j];

            }
            r[i][j]=sum;
            sum=0;
        }
    }

    printf("Output first Matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",f[i][j]);
        }
        printf("\n");
    }
    printf("Output second Matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }

    printf("Output multiply Matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
}
