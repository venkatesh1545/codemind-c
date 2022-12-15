#include<stdio.h>
int main()
{
    int n,i,j=1,gcd;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    gcd=arr[0];
    while(j<n)
    {
       if(arr[j]%gcd==0)
       {
           j++;
       }
       else
       {
           gcd=arr[j]%gcd;
       }
    }
    printf("%d ",gcd);
    return 0;
}