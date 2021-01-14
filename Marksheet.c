#include<stdio.h>
int main()
{
    int i,j,num[4][10],r,c;
    printf("enter r & c: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("num[%d][%d]",i,j);
            scanf("%d",&num[i][j]);
        }
        printf("\n");
    }

    /*for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            num[i][j]=num[i][j]/4.0+num[i][j]/4.0+num[i][j]/2.0;
            printf("Roll No: %d Total marks: %d\n",j+1,num[i][j]);
        }
        printf("\n");
    }*/

    for(j=1;j<=c;j++)
    {
        printf("Roll: %d\t",j);

    }
    printf("\n");
    printf("===============================================================================");
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------------------\n");
    printf("\t\tAll Right Reserved By-Ariful Islam.");
}

