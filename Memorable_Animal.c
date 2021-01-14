#include <stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20],c[20];
    char a1[]="vertebrado",a2[]="mamifero",a3[]="onivoro";
    char a11[]="vertebrado",a22[]="ave",a33[]="carnivoro";

    char b1[]="invertebrado",b2[]="anelideo",b3[]="hematofago";
    char b11[]="invertebrado",b22[]="inseto",b33[]="hematofago",b44[]="herbivoro";
    scanf("%s",&a);
    if(0==strcmp(a,a1))
    {
        scanf("%s",&b);
        if(0==strcmp(b,a2))
        {
            scanf("%s",&c);
            if(0==strcmp(c,a3))
            {
                printf("homem\n");
            }
            else{
                printf("vaca\n");
            }
        }
        else if(0==strcmp(b,a22))
        {
            scanf("%s",&c);
            if(0==strcmp(c,a33))
            {
                printf("aguia\n");
            }
            else{
                printf("pomba\n");
            }
        }
    }
    else if(0==strcmp(a,b1))
    {
        scanf("%s",&b);
        {
            if(0==strcmp(b,b2))
            {
                scanf("%s",&c);
                if(0==strcmp(c,b3))
                {
                    printf("sanguessuga\n");
                }
                else{
                    printf("minhoca\n");
                }
            }
            else if(0==strcmp(b,b22))
            {
                scanf("%s",&c);
                if(0==strcmp(c,b33))
                {
                    printf("pulga\n");
                }
                else{
                    printf("lagarta\n");
                }
            }
        }
    }

    return 0;
}
