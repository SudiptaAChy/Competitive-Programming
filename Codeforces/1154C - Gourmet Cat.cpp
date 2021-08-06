#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c;
string d="abcacba";
int main()
{
    cin>>a>>b>>c;
    ll week=min((a/3),min((b/2),(c/2)));
    a-=week*3;
    b-=week*2;
    c-=week*2;
    ///cout<<week<<endl<<a<<" "<<b<<" "<<c<<endl;
    ll dy=0;
    for(ll i=0;i<7;i++)
    {
        ll total=0;
        ll tmpa=a;
        ll tmpb=b;
        ll tmpc=c;
        for(ll j=0;j<30;j++)
        {
            ll x=i+j;
            x=x%7;
            if(d[x]=='a')
            {
                if(tmpa==0) break;
                else
                {
                    total++;
                    tmpa--;
                }
            }
            else if(d[x]=='b')
            {
                if(tmpb==0) break;
                else
                {
                    total++;
                    tmpb--;
                }
            }
            else
            {
                if(tmpc==0) break;
                else
                {
                    total++;
                    tmpc--;
                }
            }
        }
        dy=max(dy,total);
    }
    cout<<week*7+dy<<endl;
    ///main();
	return 0;
}
