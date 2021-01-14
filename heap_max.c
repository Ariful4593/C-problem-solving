#include<stdio.h>
#include<stdlib.h>
int left(int i)
{
    return 2*i;
}
int right(int i)
{
    return 2*i+1;
}
int parent(int i)
{
    return i/2;
}

int is_max_heap(int h[], int heap_size)
{
    int i,p;
    for(i=heap_size;i>1;i--)
    {
        p = parent(i);

        if(h[p]<h[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int heap_size = 9,i;
    int h[]={0,19,7,17,3,5,12,10,1,2};
    is_max_heap(h,heap_size);
    for(i=1;i<10;i++)
    {
        printf("%d ",h[i]);
    }

}
