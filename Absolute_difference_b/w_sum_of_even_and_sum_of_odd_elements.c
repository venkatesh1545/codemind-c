#include<stdio.h>
int main()
{
	int n,i,sumeven=0,sumodd=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sumeven=sumeven+a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			sumodd=sumodd+a[i];
		}
	}
	if(sumodd>sumeven)
	{
	    printf("%d",sumodd-sumeven);
	}
	else
	{
	    printf("%d",sumeven-sumodd);
	}
}