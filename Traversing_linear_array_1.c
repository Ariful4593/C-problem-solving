#include<stdio.h>
int main()
{
    int list[5],i;
    printf("Enter array elements: \n");
    for(i=0;i<5;i++){
        scanf("%d",&list[i]);
        printf("\n");
    }
    for(i=0;i<5;i++){
        printf("\n List[%d] = %d",i,list[i]);
    }

}

