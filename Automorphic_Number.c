#include<stdio.h>
int main()
{
    int n,a,b=1,temp;
    scanf("%d",&n);
    temp=n;
    a=n*n;
    while(n>0)
    {
        b=b*10;
        n=n/10;
    }
    if(a%b==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}