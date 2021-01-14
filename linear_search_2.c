#include<stdio.h>
int main()
{
    int num[5];
    int n,i,min,location=1;
    printf("Please enter array: ");
    scanf("%d",&n);
    printf("Please enter value of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    min = num[0];
    for(i=1;i<n;i++){
        if(num[i]<min){
            min=num[i];
            location = i + 1;
        }
    }
    printf("The lowest value is %d & her location is %d",min,location);
}
