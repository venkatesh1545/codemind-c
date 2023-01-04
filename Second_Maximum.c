#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && b>c)
        {
            printf("%d
",b);
        }
        else if(c>b && b>a)
        {
            printf("%d
",b);
        }
        else if(b>a&& a>c)
        {
            printf("%d
",a);
        }
        else
        {
            printf("%d
",c);
        }
    }
}