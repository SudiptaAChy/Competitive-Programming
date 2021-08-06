#include<bits/stdc++.h>
#define mod 998244353
using namespace std;
main()
{
    int n;
    long long t1=0,t2=0,ans;
    string a;
    cin>>n>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[0]) t1++;
        else break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==a[n-1]) t2++;
        else break;
    }
    if(a[0]==a[n-1])
        ans=((t1+1)*1ll*(t2+1))%mod;
    else
        ans=(t1+t2+1)%mod;
    cout<<ans;
}
