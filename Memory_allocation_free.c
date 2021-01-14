#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *marks;
    int i,n;
    printf("Enter student number: ");
    scanf("%d",&n);
    //Allocate memory..
    marks = (int *)malloc(sizeof(int)*n);
    if(marks ==NULL)
    {
        printf("Memory allocation failed for marks\n");
        return 1;
    }
    printf("Enter the marks for each student: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }

    //Now free the memory
    free(marks);
}
