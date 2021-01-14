#include<stdio.h>
#include<string.h>
typedef struct{
    char *name;
    char *fname;
    char *mname;
    char *dob;

}arif_nid,rabu_nid,suman_nid,rumon_nid;

int main()
{
    arif_nid arif;
    arif.name = "Ariful Islam";
    arif.fname = "Shirajul Islam";
    arif.mname = "Shamim Akter";
    arif.dob = "25 Aug 1997";

    rabu_nid rabu;
    rabu.name = "Rabu Akter";
    rabu.fname = "Shirajul Islam";
    rabu.mname = "Shamim Akter";
    rabu.dob = "15 May 1994";

    suman_nid suman;
    suman.name = "MDH Suman";
    suman.fname = "Shirajul Islam";
    suman.mname = "Shamim Akter";
    suman.dob = "18 May 1987";

    rumon_nid rumon;
    rumon.name = "MD Ruman";
    rumon.fname = "Shirajul Islam";
    rumon.mname = "Shamim Akter";
    rumon.dob = "29 March 1990";
    int i,n;

    long long arif_id = 5553148247,rabu_id = 5553148248,suman_id = 5553148249,rumon_id = 5553148250,cid;
    /*printf("Please enter your name: ");
    scanf(" %[^\n]",arif.name);*/
    printf("Please enter your Id No: ");
    scanf("%lld",&cid);
    while(1)
    {
        if(cid == arif_id)
        {
            printf("\t\tGovernment of the people's Republic of Bangladesh\n");
            printf("\t\tTemporary National ID Card\n");
            printf("\t\t-------------------------------------------------\n");
            printf("\t\tName: %s\n",arif.name);
            printf("\t\tFather: %s\n",arif.fname);
            printf("\t\tMother: %s\n",arif.mname);
            printf("\t\tDate of Birth: %s\n",arif.dob);
            printf("\t\tPS: Boorbazar\n");
            printf("\t\tThana: Satkania\n");
            printf("\t\tDistrict: Chattogram\n");
            printf("\n\n");
        }
        else if(cid == rabu_id)
        {
            printf("\t\tGovernment of the people's Republic of Bangladesh\n");
            printf("\t\tTemporary National ID Card\n");
            printf("\t\t-------------------------------------------------\n");
            printf("\t\tName: %s\n",rabu.name);
            printf("\t\tFather: %s\n",rabu.fname);
            printf("\t\tMother: %s\n",rabu.mname);
            printf("\t\tDate of Birth: %s\n",rabu.dob);
            printf("\t\tVillage: Khagoria\n");
            printf("\t\tPS: Boorbazar\n");
            printf("\t\tThana: Satkania\n");
            printf("\t\tDistrict: Chattogram\n");
            printf("\n\n");
        }
        else if(cid == suman_id)
        {
            printf("\t\tGovernment of the people's Republic of Bangladesh\n");
            printf("\t\tTemporary National ID Card\n");
            printf("\t\t-------------------------------------------------\n");
            printf("\t\tName: %s\n",suman.name);
            printf("\t\tFather: %s\n",suman.fname);
            printf("\t\tMother: %s\n",suman.mname);
            printf("\t\tDate of Birth: %s\n",suman.dob);
            printf("\t\tVillage: Khagoria\n");
            printf("\t\tPS: Boorbazar\n");
            printf("\t\tThana: Satkania\n");
            printf("\t\tDistrict: Chattogram\n");
            printf("\n\n");
        }
        else if(cid == rumon_id)
        {
            printf("\t\tGovernment of the people's Republic of Bangladesh\n");
            printf("\t\tTemporary National ID Card\n");
            printf("\t\t-------------------------------------------------\n");
            printf("\t\tName: %s\n",rumon.name);
            printf("\t\tFather: %s\n",rumon.fname);
            printf("\t\tMother: %s\n",rumon.mname);
            printf("\t\tDate of Birth: %s\n",rumon.dob);
            printf("\t\tVillage: Khagoria\n");
            printf("\t\tPS: Boorbazar\n");
            printf("\t\tThana: Satkania\n");
            printf("\t\tDistrict: Chattogram\n");
            printf("\n\n");
        }
        printf("Please enter valid id: ");
        scanf("%lld",&cid);
    }
}
