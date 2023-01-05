#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,s1=0,s2=0,s;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			s1=s1+a[i];
		}
		else
		{
			s2=s2+a[i];
		}
	}
	printf("%d",abs(s1-s2));
}