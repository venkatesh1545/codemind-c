#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,dc,sum;
    scanf("%d",&n);
    dc=log10(n)+1;
    while(dc>=2)
    {
        sum=0;
        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        n=sum;
        dc=log10(sum)+1;
    }
    printf("%d",sum);
}