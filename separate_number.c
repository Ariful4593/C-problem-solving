#include<stdio.h>

int main(){

  int num,temp,factor=1,arr[10],i,results;

  printf("Enter a number: ");

  scanf("%d",&num);

  temp=num;

  while(temp){

      temp=temp/10;
      factor = factor*10;

  }

  printf("Each digits of given number are: ");

  while(factor>1){

      factor = factor/10;
      results = num/factor;
      printf("%d ",results);

      num = num % factor;
  }
  printf("\n");
    for(i=0;i<5;i++)
    {
        arr[i] = results;
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }

  return 0;

}
