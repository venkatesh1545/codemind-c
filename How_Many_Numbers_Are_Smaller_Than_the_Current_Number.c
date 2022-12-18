#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,cnt=0,j,k,cnt2=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        cnt=0;
        for(k=0;k<n;k++)
        {
            if(a[j]>a[k])
            {
                cnt++;
            }
        }
        printf("%d ",cnt);
    }
}