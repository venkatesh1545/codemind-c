#include<stdio.h>
int main()
{
    int n,i,t,c=0,min;
    scanf("%d",&t);
    int a[t];
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(a[i]<=min)
            {
                c++;
                min=a[i];
            }
        }
        printf("%d
",c);
    }
}