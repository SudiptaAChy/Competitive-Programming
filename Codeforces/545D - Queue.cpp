#include<bits/stdc++.h>
#define mx 1000009
#define ll long long
using namespace std;
ll a[mx];
main()
{
    ll n,t=0,s=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(s<=a[i])
        {
            t++;
            s+=a[i];
        }
    }
    cout<<t;
}
