#include<stdio.h>
#include<stdlib.h>
int comparefunc(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int main()
{
    int i,n=5;
    int *value;
    value = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&value[i]);
    }
    qsort(value, 5, sizeof(int),comparefunc);
    for(i=0;i<n;i++)
    {
        printf("%d ",value[i]);
    }
    free(value);


    return 0;
}
