#include<stdio.h>
int main()
{
    int n,temp,r,s=0,p=1;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        s=s+r;
        p=p*r;
        temp=temp/10;
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