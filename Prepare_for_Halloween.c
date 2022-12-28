#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,x,y;
        scanf("%d %d",&a,&b);
        x=a*2;
        y=b*5;
        if(x>y)
        {
            printf("Chocolate
");
        }
        else if(x==y)
        {
            printf("Either
");
        }
        else
        {
            printf("Candy
");
        }
    }
}