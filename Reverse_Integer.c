#include<stdio.h>
int main()
{
    int a,r,sum=0;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    printf("%d
",sum);
}