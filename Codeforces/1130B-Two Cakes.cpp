#include<bits/stdc++.h>
#define mx 100009
#define ll long long
using namespace std;
ll a[mx],b[mx];
main()
{
    memset(a,0,sizeof a);
    memset(b,0,sizeof b);
    ll n,val,t1=0,t2=0;
    cin>>n;
    for(ll i=1;i<=2*n;i++)
    {
        cin>>val;
        if(a[val]==0) a[val]=i;
        else b[val]=i;
    }
    a[0]=1,b[0]=1;
    for(ll i=1;i<=n;i++)
    {
        t1+=abs(a[i]-a[i-1]);
        t2+=abs(b[i]-b[i-1]);
    }
    cout<<t1+t2;
}
