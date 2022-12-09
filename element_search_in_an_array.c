#include<stdio.h>
int main()
{
	int n,i,b,tem=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&b);
	for(i=1;i<n;i++)
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