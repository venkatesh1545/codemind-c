#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,fd,sum;
        scanf("%d",&a);
        b=a%10;
        c=log10(a)+1;
        fd=a/(int)(pow(10,c-1));
        sum=b+fd;
        printf("%d
",sum);
    }
}