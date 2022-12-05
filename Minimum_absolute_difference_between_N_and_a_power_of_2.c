#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=1,a,b;
	scanf("%d",&n);
	if(n==1)
	{
		printf("0");
	}
	else
	{
		while(1)
		{
			a=pow(2,i);
			if(a>n)
			{
				break;
			}
			i++;
		}
		b=n-pow(2,i-1);
		int c=pow(2,i)-n;
		int min=b<c?b:c;
		printf("%d",min);
	}
}