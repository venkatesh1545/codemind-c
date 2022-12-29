#include<stdio.h>
int main()
{
    int t,sum=0;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        scanf("%d",&a);
        if(a%2==0)
        {
            break;
        }
        else
        {
            sum=sum+a;
        }
    }
    printf("%d",sum);
}