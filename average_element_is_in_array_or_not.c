#include<stdio.h>
int main()
{
	int n,i,b,sum=0,tem=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	b=sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]==b)
		{
			tem=1;
			break;
		}
	}
	if(tem==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}