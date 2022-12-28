#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float x,y;
    scanf("%f %f",&x,&y);
    printf("%d %d
",a+b,a-b);
    printf("%0.1f %0.1f",x+y,x-y);
}