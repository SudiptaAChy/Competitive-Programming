#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
int main()
{
    ll x,y,n,val;
    cin>>x>>y>>n;
    if(n%6==1)
        val=x;
    else if(n%6==2)
        val=y;
    else if(n%6==3)
        val=y-x;
    else if(n%6==4)
        val=-x;
    else if(n%6==5)
        val=-y;
    else
        val=x-y;
    val=val%mod;
    if(val<0)
        val=mod+val;
    cout<<val;
    return 0;
}
