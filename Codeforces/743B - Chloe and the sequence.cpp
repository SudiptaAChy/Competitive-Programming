#include <bits/stdc++.h>
#define sz 123456
using namespace std;
typedef long long ll;
map<ll,ll>m;
int main()
{
    ll range=pow(2,50)-1;
    ll val=3;
    for(ll i=4;i<=range;i=i*2)
    {
        m[i]=val;
        ///cout<<i<<" "<<m[i]<<endl;
        val++;
    }
    ll n,k,ans;
    cin>>n>>k;
    if(m[k]!=0) cout<<m[k]<<endl;
    else if(k%4==1) cout<<"1\n";
    else if(k%4==2) cout<<"2\n";
    else if(k%4==3) cout<<"1\n";
    else
    {
        for(ll i=4;i<=range;i*=2)
        {
            if(k%i==0)
            {
                ll div=k/i;
                if(div%2!=0)
                {
                    ans=i;
                    break;
                }
            }
        }
        cout<<m[ans]<<endl;
    }
    return 0;
}

