#include<stdio.h>
int main()
{
	int n,i,fact,r,sum=0;
	scanf("%d",&n);
	int temp=n;
	while(n)
	{
	    i=1,fact=1;
		r=n%10;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("The number %d is a strong number",temp);
	}
	else
	{
		printf("The number %d is not a strong number",temp);
	}
}