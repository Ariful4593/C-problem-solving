#include<stdio.h>
int main()
{
    int number, arr[10];
    scanf("%d", &number);
    for(int i = 1; i < number; i++){
        if(number%i == 0){
            printf("%d\n", i);
        }
    }
}
