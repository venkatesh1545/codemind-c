#include<stdio.h>
int main()
{
    int t,r,s=0,c=0;
    scanf("%d",&t);
    int n=t;
    while(t--)
    {
        int a,k,s=0;
        scanf("%d",&a);
        k=a;
        while(a!=0)
        {
            r=a%10;
            s=s*10+r;
            a=a/10;
        }
        if(s==k)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}