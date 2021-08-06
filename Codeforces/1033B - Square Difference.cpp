#include<bits/stdc++.h>
#define ll long long
#define mx 399999
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t,a,b,d;
    cin>>t;
    while(t--)
    {
        bool y=true;
        cin>>a>>b;
        d=a+b;
        if((a-b)==1)
        {
            if(d%2==0)
                cout<<"NO\n";
            else
            {
                for(ll i=3;i*i<=d;i+=2)
                {
                    if(d%i==0)
                    {
                        y=false;
                        break;
                    }
                }
                if(y==true) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
        else
            cout<<"NO\n";
    }
    return 0;
}

