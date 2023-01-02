#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
    int k,i;
    k=pow(n,0.5);
    for(i=2;i<k+1;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int is_palindrome(int n)
{
    int temp,rev,d;
    temp=n;
    rev=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        rev=(rev*10)+d;
    }
    n=temp;
    if(n==rev)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    while(true)
    {
        n+=1;
        if(is_prime(n))
      {
        if(is_palindrome(n))
        {
            printf("%d",n);
            break;
        }
      }
    
    }
}