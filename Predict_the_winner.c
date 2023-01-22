#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        k=k+a[i];
        else
        c=c+a[i];
    }
    if(abs(k-c)%4==0)
    printf("X");
    else
    printf("Y");
}