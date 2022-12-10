#include<stdio.h>
int main()
{
	int n,i,flag=0,sum=0;
	scanf("%d",&n);
	int a[n],k,l;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
	scanf("%d %d",&k,&l);
	for(i=0;i<n;i++)
	{
		if(a[i]<k || a[i]>l)
		{
			flag=1;
			sum=sum+a[i];
		}
	}
	printf("%d",sum);
}