#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[40];
    int id;
    int marks;
}studenttype;
void main()
{
    studenttype student[11],temp;
    int i,n=10,j;

    for(i=0;i<n;i++)
    {
        printf("ID: ");
        scanf("%d",&student[i].id);
        printf("Name: ");
        scanf(" %[^\n]", student[i].name);
        printf("Marks: ");
        scanf("%d",&student[i].marks);
        printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i-1;j++)
        {
            if(student[j].marks<student[j+1].marks)
            {
                  temp=student[j];
                  student[j]=student[j+1];
                  student[j+1]=temp;
            }
        }
    }


    printf("\n");
    printf("Roll:\t\tID\t\tName:\t\tMarks:\t\t\n\n");
    for(i=1;i<n;i++)
    {
        printf("%d\t\t%d\t\t%s\t\t%d\t\t\n",i,student[i].id,student[i].name,student[i].marks);
    }
}
