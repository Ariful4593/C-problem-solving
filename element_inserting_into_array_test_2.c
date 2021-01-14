#include<stdio.h>
int main()
{
    int size,arra[10],i,pos,value,j,k;
    printf("Please enter size: ");
    scanf("%d",&size);

    printf("Please enter %d element: \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arra[i]);
        printf("Array [%d] = [%d]\n",i,arra[i]);
    }

    printf("Please enter position: \n");
    scanf("%d",&pos);

    printf("Please enter value: \n");
    scanf("%d",&value);

    for(j=size-1;j>=pos-1;j--)
    {
        arra[j+1] = arra[j];
    }

    arra[pos-1] = value;

    printf("After inserting...\n");
    for(k=0;k<=size;k++)
    {
        printf("%d\n",arra[k]);
        printf("Array [%d] = [%d]\n",k,arra[k]);
    }

}
