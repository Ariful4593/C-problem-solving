#include<stdio.h>
#include<string.h>

typedef struct{
    char country_name[100];
    char tmp[100];
    char name[50];
    char fname[50];
    char mname[50];
    long long id;
    int day;
    char month[50];
    long long year;
}details;

int main()
{
    details me[10];
    int i,n=2;
    for(i=0;i<n;i++)
    {
        printf("Country name %d: ",i+1);
        scanf(" %[^\n]", me[i].country_name);
        printf("Temporary: ");
        scanf(" %[^\n]",me[i].tmp);
        printf("Name: ");
        scanf(" %[^\n]", me[i].name);
        printf("Father Name: ");
        scanf(" %[^\n]", me[i].fname);
        printf("Mother Name: ");
        scanf(" %[^\n]", me[i].mname);
        printf("Day: ");
        scanf("%d",&me[i].day);
        printf("Month: ");
        scanf("%s]", me[i].month);
        printf("Year: ");
        scanf("%lld",&me[i].year);
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",me[i].country_name);
        printf("%s\n",me[i].tmp);
        printf("%s\n",me[i].name);
        printf("%s\n",me[i].fname);
        printf("%s\n",me[i].mname);
        printf("%d %s %d\n",me[i].day,me[i].month,me[i].year);
        printf("\n\n");
    }

}
