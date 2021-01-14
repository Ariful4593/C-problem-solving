#include<stdio.h>
int a;
static int b;
void func()
{
    a = a + 10;
    b = b + 12;
}
int main()
{
    func();
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
