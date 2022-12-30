#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int A[n],t=0;
    for(i=0;i<=n;++i)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;++i)
    {
        for(j=i+1;j<n;++j)
        {
            if(A[i]>A[j])
            {
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }
    printf("%d",A[2]);
}