#include<stdio.h>
int main()
{
    int n,s=0,p=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        p=p*r;
        s=s+r;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}