#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,power,mod;
    scanf("%d %d %d",&n,&x,&y);
    power=pow(n,x);
    mod=power%y;
    printf("%d",mod);
}