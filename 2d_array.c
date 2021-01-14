#include<stdio.h>
int main()
{
    int i,j;
    int disp[3][4] = {  {5,6,7,8}, {9,10,11,12}, {13,14,15,16}  };
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",disp[i][j]);
        }
        printf("\n");
    }
}

