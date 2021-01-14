#include<stdio.h>
int main()
{
    int i,n;
    printf("Please enter value of N: ");
    scanf("%d",&n);
    for(n=1;n<=20;n++)
    {
        for(i=1;i<=10;i++){
            printf("The result is: %d x %d = %d\n",i,n,i*n);
        }

    }
}
