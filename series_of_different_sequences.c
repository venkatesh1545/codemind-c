#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1=3,k2=0,h,a=-2,k3=0,d=4,j=0;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2==0)
        {
            printf("%d ",a);
                h=pow(5,j);
                j++;
                a=a+h*4;
        }
        else
        {
            printf("%d ",k1);
            k1=k1+2*pow(3,k3);
            k3++;
        }
    }
}