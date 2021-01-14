#include<stdio.h>
int main()
{
    Triangle();
}
void Triangle()
{
    int a,b,area;
    printf("Please enter base & height: ");
    scanf("%d %d",&a,&b);
    area = 0.5*a*b;
    printf("The Triangle is: %d",area);
}
