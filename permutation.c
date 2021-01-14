#include<stdio.h>
void print(int *num, int n)
{
    int i,max=num[0];
    for ( i = 0 ; i < n ; i++)
        printf("%d", num[i]);

    printf("\n");
}
/*
void test(int *array, int n)
{
    int min,loc=0;
    min = 0;
    for(i=0;i<n;i++)
    {
        if(min<array[i])
        {
            min = array[i];
            loc = i;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",min,loc);
    }
}*/
int main()
{
    int num,i,array[10],j,temp,n,min;
        int *ptr;

    scanf("%d",&n);

    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {

        int mod = num % 10;
        printf("%d\n",mod);

        num = num / 10;
        array[i] = mod;
    }

    printf("After insert array...\n");
     for(i=0;i<n;i++)
     {
         printf("%d\n",array[i]);
     }


     printf("After sorting...\n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if(array[j]>array[j+1])
             {
                 temp = array[j];
                 array[j] = array[j+1];
                 array[j+1] = temp;

             }
         }
     }
     printf("\n\n");
     for(j=0;j<n;j++)
     {
         printf("%d ",array[j]);
     }
     printf("\n");
     printf("After all number make permutaion:\n");
    for (j = 1; j <= n; j++) {
            for (i = 0; i < n-1; i++) {
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
                print(array, n);

        }
    }
    return 0;
}
