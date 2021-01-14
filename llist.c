#include<stdio.h>

int maximum(int a, int b)
{
    int z;
    z = (a>=b)?a:b;
    return(z);
}
int main()
{
    int a,b,c,d;
    printf("\na = ");
    scanf("%d",&a);
    printf("\nb = ");
    scanf("%d",&b);
    printf("\nc = ");
    scanf("%d",&c);

    d = maximum(a,b);
    printf("\n\nmaximum = %d", maximum(c,d));

}
