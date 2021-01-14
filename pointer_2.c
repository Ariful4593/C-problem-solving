
#include<stdio.h>
int main()
{
    int x = 10;
    int *p;

    p = &x;
    printf("Value of x: %d\n",x);

    *p = 20;
    printf("Value of x:%d\n",x);
    printf("Value of x:%p\n",&x);
    printf("Value of x:%p\n",p);

}
