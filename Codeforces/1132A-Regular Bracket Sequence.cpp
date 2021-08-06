#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    ll c1,c2,c3,c4;
    ll ans=0;
    cin>>c1>>c2>>c3>>c4;
    ll d1=c1-c3;
    ll d2=c4-c3;
    if(c1==0 && c4==0 && c3!=0) ans=0;
    else if(d1==d2) ans=1;
    else ans=0;
    cout<<ans;
}
