#include<stdio.h>
int main()
{
	int n,m,i,j,c=0;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==0 ||j==0 ||i==n-1 ||j==m-1)
			{
				c=c+a[i][j];
			}
		}
	}
	printf("%d",c);
	
}