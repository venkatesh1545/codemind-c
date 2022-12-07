#include<stdio.h>
int main()
{
    float n,i,sum=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);   
    }
    printf("%0.2f",sum);
}