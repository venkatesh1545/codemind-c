#include<stdio.h>
int main()
{
    int m,n,i,a,b;
    scanf("%d %d",&m,&n);
    for(i=m+1;i<n;i++)
	{
	    a=i*i;
	    b=i*i*i;
	    printf("%d %d %d
",i,a,b);
	}
}