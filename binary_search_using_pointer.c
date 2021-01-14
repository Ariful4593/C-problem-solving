#include<stdio.h>
#include<stdlib.h>
int comparefunc(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int i,n=5,key;
    int *array, *item;
    array = (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\n");
    qsort(array, n, sizeof(int), comparefunc);
    /*for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }*/
    while(1)
    {
        printf("Enter the value of the key (0 to exit): ");
        scanf("%d",&key);
        if(key==0)
        {
            break;
        }
        item = (int *)bsearch(&key, array, n, sizeof(int),comparefunc);

        if(item!=NULL)
        {
            printf("Item found: %d\n",*item);
        }
        else{
            printf("Item not found in array\n");
        }
    }

}
