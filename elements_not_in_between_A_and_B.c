#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    int arr[n],k,l;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d%d",&k,&l);
    int a,b,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<k || arr[i]>l)
        {
        flag=1;
        printf("%d ",arr[i]);
        }
    }
    if(flag==0)
    printf("-1");
}