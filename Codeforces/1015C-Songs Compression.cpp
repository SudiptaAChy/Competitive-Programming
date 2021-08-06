#include<bits/stdc++.h>
#define mx 1000009
#define ll long long
using namespace std;
ll a[mx],d[mx],b[mx];
main()
{
    ll n,m,i,t=0,sum=0;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        sum+=a[i];
        d[i]=a[i]-b[i];
    }
    if(sum<=m)
    {
        cout<<"0";
        exit(0);
    }
    sort(d,d+n);
    for(i=n-1;i>=0;i--)
    {
        sum-=d[i];
        t++;
        if(sum<=m)
            break;
    }
    if(i==-1) cout<<"-1";
    else cout<<t;
}
