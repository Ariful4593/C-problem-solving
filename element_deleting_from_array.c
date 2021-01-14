#include<stdio.h>
int main()
{
    int size,array[10],pos,value,i,j,k,l,m;
    printf("Please enter size: ");
    scanf("%d",&size);

    printf("Please enter %d element: \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Please enter Position: \n");
    scanf("%d",&pos);


    if(pos>= size + 1)
    {
        printf("Deleting Not Possible.");
    }
    else{
        for(l=pos-1;l<size-1;l++)
        {
            array[l] = array[l + 1];
        }


        printf("Resultant array is \n");
        for(m=0;m<size-1;m++)
        {
            printf("[%d]\n",array[m]);
        }
    }


}

