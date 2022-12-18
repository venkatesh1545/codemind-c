#include<stdio.h>
int main()
{
    int n,i,j,cnt=0,w;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&w);
    for(j=0;j<n;j++)
    {
        if(a[j]>w)
        {
            cnt=cnt+2;
        }
        else if(a[j]<=w)
        {
            cnt++;
        }
        else
        {
            cnt=cnt+0;
        }
    }
    printf("%d",cnt);
}