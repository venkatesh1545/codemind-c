#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,h=0,k=0,z=2,y,x=0,a,b,c=1;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            a=pow(2,k);
            h=h+a;
            printf("%d ",h);
            k++;
        }
        else
        {
        	if(c==1)
        	{
        		printf("%d ",z);
        		c+=1;
			}
			else
			{
            b=pow(3,x);
            y=b*6;
            z=z+y;
            printf("%d ",z);
            x++;
        }
            
        }
    }
}