#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Please enter value of n: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("It %d is prime number.",i);
    }else{
        printf("It is not prime number.");
    }
}

