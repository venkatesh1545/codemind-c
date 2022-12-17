#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i;
    float sum=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        sum=sum+sqrt(i);
    }
    printf("%0.2f",sum);
}