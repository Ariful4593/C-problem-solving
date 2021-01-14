#include<stdio.h>
int main()
{
    int x = 10;
    int y;
    int *p;

    printf("Value of x is: %d\n",x);

    p = &x;
    y = *p;
    *p = 15;
    printf("X location is: %d\n",x);
    printf("X location is: %d\n",y);
    printf("X location is: %d\n",*p);
    printf("X location is: %d\n",x);
}
