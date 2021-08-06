#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
deque<ll>a,b;
main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    ll n,k,v,total=0,ans;
    cin>>n>>k;
    cin>>v;
    a.push_front(v);
    for(int i=1;i<n;i++)
    {
        cin>>v;
        b.push_back(v);
    }
    if(k>n) k=n-1;
    while(true)
    {
        ll x=a.front();
        a.pop_front();
        ll y=b.front();
        b.pop_front();
        if(x>y)
        {
            a.push_front(x);
            total++;
            b.push_back(y);
            if(total>=k)
            {
                ans=x;
                break;
            }
        }
        else
        {
            a.push_front(y);
            total=1;
            b.push_back(x);
//            if(total>=k)
//            {
//                ans=y;
//                break;
//            }
        }
    }
    cout<<ans;
}
