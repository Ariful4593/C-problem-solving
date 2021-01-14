#include<stdio.h>
int main()
{
    int a=18,b;
    printf("Enter your age: ");
    scanf("%d",&b);
    b = a>=b? "you cannot vote" : "You can vote";
    printf("%s",b);

}
