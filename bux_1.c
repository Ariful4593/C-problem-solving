#include<stdio.h>
void test(int num)
{
    int i,j;
    for(i=0;i<=num;i++)
        {
            for(j=0;j<num;j++)
            {
                printf("*");
            }
            printf("\n");

        }
}
int main()
{
    int num,t,i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&num);
        test(num);
        printf("\n");

    }
}

