#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void)
{
    ll n,k,m;
    cin>>n;
    if(n<3)
    {
        cout<<"-1";
        exit(0);
    }
    if(n&1)
    {
        k=(n*n+1)/2;
        m=(n*n-1)/2;
    }
    else
    {
        k=n*n/4+1;
        m=k-2;
    }
    cout<<m<<" "<<k;
    return 0;
}
