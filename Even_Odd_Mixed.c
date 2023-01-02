#include<stdio.h>
int main()
{
    int n,i,sum=0,p=1,t;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        if(i%2==0)
        {
            t=1;
        }
        else
        {
            t=0;
        }
        sum=sum+t;
        p=p*t;
        n=n/10;
    }
    if(sum==0 && p==0)
    {
        printf("Odd");
    }
    else if(sum>0 && p==1)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
}