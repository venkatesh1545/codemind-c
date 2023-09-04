#include<bits/stdc++.h>
using namespace std;
int main()
{
    int digits,n;
    cin>>n;
    digits=log10(n)+1;
    int temp;
    while(digits>=2)
    {
        temp=0;
        while(n!=0)
        {
            int r=n%10;
            temp=temp+r;
            n=n/10;
        }
        n=temp;
        digits=log10(temp)+1;
    }
    cout<<temp<<endl;
}