#include<stdio.h>
int main()
{
	int n,l;
	scanf("%d %d",&l,&n);
	int a,b,i;
	for(i=1;i<=n;i++)
	{
		scanf("%d %d",&a,&b);
		if(a<l||b<l)
		{
			printf("UPLOAD ANOTHER
");
		}
		else if(a>=l && b>=l)
		{
			if(a==b)
			printf("ACCEPTED
");
			else
			printf("CROP IT
");
		}
	}
}
