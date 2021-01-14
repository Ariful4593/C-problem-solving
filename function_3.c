#include<stdio.h>
int main()
{
    double base,exp,resul=1,i;
    printf("Enter base: ");
    scanf("%lf",&base);

    printf("Enter exp: ");
    scanf("%lf",&exp);

    for(i=1;i<exp;i++)
    {
        resul = resul*base;
    }
    printf("The results is: %0.lf",resul);
}
