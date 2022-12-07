#include<stdio.h>
int main()
{
    int n,q,c=0;
    scanf("%d",&n);
    if(n>0)
    {
        while(n!=0)
        {
            if(n%2==0)
            {
                n=n/2;
            }
            else if(n%3==0)
            {
                n=n/3;
            }
            else if(n%5==0)
            {
                n=n/5;
            }
            else
            {
                c++;
                break;
            }
        }
        if(c==1)
        {
            if(n==1)
            {
                printf("Ugly Number");
            }
            else
            {
                printf("Not Ugly Number");
            }
        }
    }
    else
    {
        printf("Not Ugly Number");
    }
}