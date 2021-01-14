#include<stdio.h>
int main()
{
    struct nid{
        char name[20];
        char fname[20];
        char mname[20];
        char dob;
        int id;
    };
    struct nid one[5];
    int i,n=2;
    for(i=0;i<n;i++)
    {

        printf("Enter your Name: ");
        scanf("%s",&one[i].name);
        printf("Enter your Father Name: ");
        scanf("%s",&one[i].fname);
        printf("Enter your Mother Name: ");
        scanf("%s",&one[i].mname);
        printf("ID NO: ");
        scanf("%d",&one[i].id);
        printf("\n\n");

    }
    printf("Output: \n\n");

    for(i=0;i<n;i++)
    {
        printf("\t\tGovernment of the People's Republic of Bangladesh\n");
        printf("\t\tNATIONAL ID CARD/\n");
        printf("\t\tName: %s\n",one[i].name);
        printf("\t\tFather Name: %s\n",one[i].fname);
        printf("\t\tMother Name: %s\n",one[i].mname);
        printf("\t\tID NO: %d\n",one[i].id);

        printf("\n");

    }
}
