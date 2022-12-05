#include<stdio.h>
int main()
{
    int n,a,p,s=0;
    scanf("%d",&n);
    a=n*n;
    while(a!=0)
    {
        p=a%10;
        s=s+p;
        a=a/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}