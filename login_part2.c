#include<stdio.h>
int main()
{
    int i,n;
    char pass[5][10]={"12345","54321"},user_pass[20],admin_lis[5][10]={"Admin","Sunny","Rubel","Junto"},name[40];
    while(1)
    {


    printf("Please enter your name: ");
    gets(name);
    for(i=0;i<5;i++)
    {
        if(strcmp(name,admin_lis[i])==0)
        {
            printf("\n Welcome %s\n",name);
            break;
        }
        else{
            printf("Your name don't match with database\n");
            break;
        }
    }
    printf("Please enter your password: ");
    gets(pass);
    for(i=0;i<5;i++)
    {
        if(strcmp(pass,user_pass)==0)
        {
            printf("Wow Come in!\n");
        }
        else{
            printf("Your password don't match\n");
            break;
        }
    }
}
}
