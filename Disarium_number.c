#include<stdio.h>
#include<math.h>
int main()
{
    int a,r,s=0,i=0,k=0,p,n;
    scanf("%d",&a);
    n=a;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    while(s!=0)
    {
        p=s%10;
        i++;
        k=pow((p),i)+k;
        s=s/10;
    }
    if(k==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}