#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d %d",&a,&b);
    n=a*1;
    c=b*2;
    d=n+c;
    if(d%2==0 &&(a!=0 && a%2==0 || a==0 &&b%2==0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}