#include<stdio.h>
int main()
{
    int x = 10;
    int *p;
    p = &x;
    printf("Value of p is location %p\n", &p);
}

