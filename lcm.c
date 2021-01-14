#include<stdio.h>
int main()
{
    int i,n1,n2,min;
    scanf("%d %d",&n1,&n2);
    min = (n1 > n2)?n1:n2;
    while(1)
    {
        if(min%n1==0 && min%n2==0)
        {
            printf("%d %d %d",n1,n2,min);
            break;
        }
        min++;
    }
}

