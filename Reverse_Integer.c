#include<stdio.h>
int is_plndrm(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",is_plndrm(n));
}
int is_plndrm(int m)
{
    int q,r,s=0;
    q=m;
    while(q!=0)
    {
        r=q%10;
        s=(s*10)+r;
        q=q/10;
    }
    return s;
}