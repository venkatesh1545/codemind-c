#include<stdio.h>
int main()
{
	int a,b,c,s1;
	scanf("%d %d",&a,&b);
	s1=a+b;
	c=21-s1;
	if(c>10)
	{
		printf("-1");
	}
	else if(c>=1 && c<=10)
	{
		printf("%d",c);
	}
	else
	{
		printf("Invalid");
	}
}