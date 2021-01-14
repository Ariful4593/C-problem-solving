#include<stdio.h>
int main()
{
    int i,j,k,n,number[5];
    printf("Enter the value of N: ");
    scanf("%d",&n);
    printf("Enter the number: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j = i + 1; j<n; j++)
        {
            if(number[i]>number[j])
            {
                k = number[i];
                number[i] = number[j];
                number[j] = k;
            }
        }
    }
    printf("The numbers arranged is \n");
    for(i = 0;i<n;i++)
    {
        printf("%d\n",number[i]);
    }
}
