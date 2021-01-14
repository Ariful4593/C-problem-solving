#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i,len,decimal=0,power;
    char binary[65];
    printf("Enter binary value: ");
    scanf("%s",binary);
    len = strlen(binary);
    power = len - 1;
    for(i=0;i<len;i++)
    {
        decimal += (binary[i]-'0') * pow(2,power);
        power--;
    }
    printf("Decimal value is %d\n",decimal);

}
