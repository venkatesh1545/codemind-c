#include<stdio.h>
int main()
{
    int n;
    float charge,sc,bill;
    scanf("%d",&n);
    if(n<=199)
    {
        charge=1.20*n;
    }
    else if(n>=200 && n<400)
    {
        charge=1.50*n;
    }
    else if(n>=400 && n<600)
    {
        charge=1.80*n;
    }
    else if(n>=600)
    {
        charge=2.00*n;
    }
    if(charge>400)
    {
        sc=0.15*charge;
    }
    else
    {
        sc=100;
    }
    bill=charge+sc;
    printf("%.2f",bill);
}