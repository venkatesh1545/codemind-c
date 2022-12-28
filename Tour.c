#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,x,y;
        scanf("%d %d",&a,&b);
        x=a*5;
        y=b*7;
        printf("%d
",x+y);
    }
}