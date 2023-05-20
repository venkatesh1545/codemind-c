#include<stdio.h>
int main()
{
    int a,b,i;
    int firstDivisorSum = 0;
    int secondDivisorSum = 0;
    scanf("%d %d",&a,&b);
    for(int i=1;i<a;i++){
        if(a% i == 0){
            firstDivisorSum = firstDivisorSum + i;
        }
    }
    for(int i=1;i<b;i++){
        if(b% i == 0){
            secondDivisorSum = secondDivisorSum + i;
        }
    }
    if((a== secondDivisorSum) && (b== firstDivisorSum))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }

}