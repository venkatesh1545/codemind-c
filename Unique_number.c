#include<stdio.h>
int main()
{
    int a[10]={0},n,r;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(a[r]==1)
        {
            break;
        }
        else
        {
            a[r]=1;
        }
        n=n/10;
    }
    if(n)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}