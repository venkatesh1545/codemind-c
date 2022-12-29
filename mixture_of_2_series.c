#include<stdio.h>
int main()
{
    int n,i,k=0,h=0;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",k);
            k+=2;
        }
        else
        {
            printf("%d ",h);
            h=h+1;
        }
    }
}