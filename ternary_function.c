#include<stdio.h>
char lower_to_upper(char a)
{
    char b;
    b = (a>='a' && a<='z')? ('A' + a - 'a'):a;
    return (b);
}
int main()
{
    char lower,upper;
    printf("Please enter a lowercase character: ");
    scanf("%c",&lower);
    upper = lower_to_upper(lower);
    printf("\n The uppercase equivalent is %c\n\n", upper);
}
