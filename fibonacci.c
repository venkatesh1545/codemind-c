#include<stdio.h>
int main()
{
    int i,n,t1,t2,t3;
    scanf("%d",&n);
    t1=0;
    t2=1;
    printf("%d %d ",t1,t2);
    for(i=3;i<=n;i++)
    {
        t3=t1+t2;
        printf("%d ",t3);
        t1=t2;
        t2=t3;
    }
}