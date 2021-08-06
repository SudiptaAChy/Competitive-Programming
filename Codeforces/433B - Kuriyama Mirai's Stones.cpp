#include <bits/stdc++.h>
#define sz 123456
using namespace std;
typedef long long ll;
ll a[sz],s[sz],a1[sz],s1[sz];
int main()
{
    ll n,m,l,r,tp;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        a1[i]=a[i];
        s[i]=s[i-1]+a[i];
    }
    sort(a1,a1+n+1);
    for(ll i=1;i<=n;i++)
    {
        s1[i]=s1[i-1]+a1[i];
    }
    cin>>m;
    while(m--)
    {
        cin>>tp>>l>>r;
        if(tp==1)
        {
            cout<<s[r]-s[l-1]<<endl;
        }
        else
        {
            cout<<s1[r]-s1[l-1]<<endl;
        }
    }
    return 0;
}

