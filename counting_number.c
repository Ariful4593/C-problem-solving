#include<stdio.h>
int main()
{
    forLoop();
}
int forLoop(){
    int num,count=1;
    printf("Please enter a number: ");
    scanf("%d",&num);
    for(count;count<=num;count++)
    {
        num= num/10;
    }
    printf("Result is: %d",count);
}
int whilLoop(){
    int num,count=0;
    printf("Please enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        num = num/10;
        ++count;
    }
}
