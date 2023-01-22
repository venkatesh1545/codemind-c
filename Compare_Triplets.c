#include<stdio.h>
int main()
{
    int i,j,n1=0,n2=0;
    int a[3],b[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]<b[i])
        {
            n1++;
        }
        else if(a[i]>b[i])
        {
            n2++;
        }
    }
    printf("%d %d",n2,n1);
}