#include<stdio.h>
int main()
{
	int n,k,x,y,min;
	scanf("%d %d %d %d",&n,&k,&x,&y);
	int redcost = k*x;
	int bluecost1=(n-k)*y;
	int bluecost2=(n-k)*x;
	min=(bluecost1<bluecost2)?bluecost1:bluecost2;
	printf("%d",redcost+min);
}