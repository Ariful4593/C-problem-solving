#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,count=0,error,res=0;
    char master_list[5][20]={"admin","Shofiq","Rafiq","Jabbar","Salam"},name[20];
    while(1){


    printf("Enter user name: ");
    gets(name);
    for(i=0;i<5;i++)
    {
        if(strcmp(name,master_list[i])==0)
        {
            count++;
            break;
        }
    }
    if(count==1)
    {
        printf("\nWelcome %s !\n",name);
        printf("\n Enter a number to show factorial: ");
        scanf("%d",&n);
        printf("Factorial of %d is %d",n,factorial(n));
    }
    else{
        error = printf("Error: You are not allowed to run this program.\n\n", name);
        res=res+1;

    }

    if(res>=3)
    {
        printf("Sorry you are failed. you cannot try this after five seconds.\n");
        break;
    }
    }
}
int factorial(int n)
{
    int i,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}
