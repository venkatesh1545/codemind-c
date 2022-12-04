#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int fact=1,j;
        scanf("%d",&t);
        for(j=1;j<=t;j++)
        {
            fact=fact*j;
        }
        printf("%d
",fact);
    }
}