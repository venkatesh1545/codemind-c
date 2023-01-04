#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x=a+b;
    y=c+b;
    z=a+c;
    if(x>y && y>=z)
    {
        printf("%d",x);
    }
    else if(x>z && z>=y)
    {
        printf("%d",x);
    }
    else if(y>z && z>=x)
    {
        printf("%d",y);
    }
    else if(x>y && y>=z)
    {
        printf("%d",x);
    }
    else 
    {
        printf("%d",z);
    }
}