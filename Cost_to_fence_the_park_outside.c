#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,w,cst;
    cin>>l>>b>>w>>cst;
    int tc=cst*((l+2*w)*(b+2*w)-(l*b));
    cout<<tc<<endl;
}