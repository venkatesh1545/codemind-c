#include<stdio.h>
int main()
{
    int sum=0,product=1,subtract,n,r,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        product=product*r;
        sum=sum+r;
        q=q/10;
    }
    subtract=product-sum;
    printf("%d",subtract);
}