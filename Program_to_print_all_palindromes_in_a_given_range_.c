#include<stdio.h>
int main()
{
    int i,r,reverse,temp,a,b;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        temp=i;
        reverse=0;
        while(temp)
        {
            r=temp%10;
            temp=temp/10;
            reverse=(reverse*10)+r;
        }
        if(i==reverse)
        {
            printf("%d ",i);
        }
    }
}