#include <stdio.h>
#include<math.h>
int main()
{
int n,p,r,r1;
scanf("%d",&n);
r=n%10;
p=log10(n)+1;
int a=n/pow(10,p-1);
r1=n%(int)(pow(10,p-1));
int b=r1%10;
int c=r1-b;
int d=c+a;
int x=b*pow(10,p-1);
int y=x+d;
printf("%d",y);
}