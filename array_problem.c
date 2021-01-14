#include<stdio.h>
int main()
{
    int array[] = {10,20,30,40,50,60,25,85,100,65,98,125,500};
    int array2[13];
    int i,j;
    for(i=0,j=9;i<10;i++,j--)
    {
        array2[j] = array[i];
    }
    for(i=0;i<10;i++)
    {
        array[i] = array2[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n", array[i]);
    }
}
