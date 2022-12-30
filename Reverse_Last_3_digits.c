#include<stdio.h>
int main()
{
    int n,a,b,c,r,s=0;
    scanf("%d",&n);
    a=n%1000;
    b=n-a;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    c=b+s;
    printf("%d",c);
}