#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000009];
main()
{
    ll n,s=0,ok=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        if(a[i]%2!=0) ok++;
    }
    if(s%2!=0 || ok>0) cout<<"First";
    else cout<<"Second";
}
