#include<stdio.h>
int main()
{
	int n,p,q,r;
	scanf("%d",&n);
	r=n%10;
	q=n/10;
	p=r/5;
	if(r==0)
	{
		printf("%d",q);
	}
	else if(r==5 && r%5==0)
	{
		printf("%d",p+q);
	}
	else
	{
		printf("-1");
	}
}