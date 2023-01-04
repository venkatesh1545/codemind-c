#include<stdio.h>
int main()
{
    int i,j,k,n,l,t,f;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        for(l=i+1;l<n;l++)
        {
            if(a[i]<a[l])
            {
                t=a[i];
                a[i]=a[l];
                a[l]=t;
            }
        }
    }
    printf("%d",a[f-1]);
}