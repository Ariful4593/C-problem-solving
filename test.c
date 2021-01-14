#include<stdio.h>
int main()
{
    int number, divide;
    scanf("%d", &number);
    for(int i = 2; i<number; i++){
        if(number%i == 0){
            printf("%d\n", i);
        }
    }
}

