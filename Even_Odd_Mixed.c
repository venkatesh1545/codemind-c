#include<stdio.h>
int main()
{
	int n,i,j,p=1,sum=0;
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		if(i%2==0)
		{
			j=1;
		}
		else
		{
			j=0;
		}
		sum=sum+j;
		p=p*j;
		n=n/10;
	}
	if(sum>0 && p==1)
	{
		printf("Even");
	}
	else if(sum==0 && p==0)
	{
		printf("Odd");
	}
	else
	{
		printf("Mixed");
	}
}