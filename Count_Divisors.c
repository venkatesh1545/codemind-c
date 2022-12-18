#include<stdio.h>
int main()
{
    int m,n,i,a,c=0;
    scanf("%d %d %d",&m,&n,&a);
    for(i=m;i<=n;i++)
    {
        if(i%a==0)
        {
            c++;
        }
    }
    printf("%d",c);
}