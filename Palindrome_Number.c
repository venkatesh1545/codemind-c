#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,r,reverse=0;
        scanf("%d",&a);
        int temp=a;
        while(a!=0)
        {
            r=a%10;
            reverse=reverse*10+r;
            a=a/10;
        }
        if(reverse==temp)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}