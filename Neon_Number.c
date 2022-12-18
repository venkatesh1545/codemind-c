#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a*a;
    int r,s=0;
    while(b!=0)
    {
        r=b%10;
        b=b/10;
        s=s+r;
    }
    if(s==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}