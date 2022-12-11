#include<stdio.h>
int main()
{
	int n=3,i,p=1;
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    p=p*a[i];
	}
	printf("%dKB",p);
}