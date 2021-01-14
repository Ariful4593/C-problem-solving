#include<stdio.h>
int main()
{
    int i;
    int total_marks[] = {86,98,68,85,68,65,58,96,58,69,78,74,75,74,85,47,48,47,45,49};
    int marks_count[101];
    for(i=0;i<101;i++)
    {
        marks_count[i] = 0;
    }
    for(i=0;i<40;i++)
    {
        marks_count[total_marks[i]]++;
    }
    for(i = 50; i<=100; i++)
    {
        printf("Marks: %d Count: %d\n",i,marks_count[i]);
    }
}
