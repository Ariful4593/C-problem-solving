#include<stdio.h>
    struct student{
        char first[20];
        char last[20];
        int id;

    };
int main()
{

    struct student one[3];
    int i, n = 3;
    for(i=0;i<n;i++)
    {
        printf("Entry Student id: %d: ", i+1);
        scanf("%d",&one[i].id);
        printf("Entry Student name %d: ",i+1);
        scanf("%s %s",&one[i].first,&one[i].last);


    }
    printf("Output\n\n\n");
    for(i=0;i<n;i++)
    {
        printf("ID: %d\n",one[i].id);
        printf("Name: %s %s\n",one[i].first,one[i].last);
    }

}
