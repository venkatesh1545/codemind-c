#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,b,sum=0,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        b=arr[n-i-1]*pow(2,i);
        sum=sum+b;
    }
    printf("%d",sum);
}