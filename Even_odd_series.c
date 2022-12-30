#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,i,k1=-1,k2=1;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            if(k1==-1)
            {
                printf("0 ");
                k1++;
            }
            else
            {
                a=pow(3,k1);
                printf("%d ",a);
                k1++;
            }
        }
        else
        {
            b=pow(2,k2);
            printf("%d ",b);
            k2++;
        }
    }
}