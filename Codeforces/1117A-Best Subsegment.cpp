#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000009];
main()
{
    ll n,sum=0,mx=0,ans=1,ans1=0;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==mx && a[i+1]==mx)
        {
            ans+=1;
        }
        else
        {
            ans1=max(ans1,ans);
            ans=1;
        }
    }
    ans1=max(ans1,ans);
    cout<<ans1;
}
