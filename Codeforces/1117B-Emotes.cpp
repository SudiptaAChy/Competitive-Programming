#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000009];
main()
{
    ll n,m,k;
    ll sum=0;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll pr1=m/(k+1);
    ll pr2=pr1*(k*a[n-1]+a[n-2]);
    ll pr3=m%(k+1);
    ll pr4=pr2+pr3*a[n-1];
    cout<<pr4;
}
