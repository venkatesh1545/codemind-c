#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d %d",&n,&a);
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
}