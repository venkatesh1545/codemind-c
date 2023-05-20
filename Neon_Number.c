#include<stdio.h>
int main()
{
    int n,sq,i,sum=0,t;
    scanf("%d",&n);
    sq=n*n;
    t=n;
    while(sq>0)
    {
        i=sq%10;
        sum=sum+i;
        sq=sq/10;
    }
    if(sum==t)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}