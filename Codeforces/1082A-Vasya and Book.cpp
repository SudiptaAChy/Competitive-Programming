#include<bits/stdc++.h>
#define ll long long
#define mx 1000000009
using namespace std;
main(void)
{
    ll t,s,x,y,n,d,s1,s2,s3,mn;
    cin>>t;
    while(t--)
    {
        ll ok=0;
        mn=1000000000;
        cin>>n>>x>>y>>d;
        if(abs(x-y)%d==0)
        {
            ok=1;
            s1=abs(x-y)/d;
            mn=min(s1,mn);
        }
        else
        {
            if(abs(y-1)%d==0)
            {
                ok=1;
                s2=ceil((double)abs(x-1)/d)+abs(y-1)/d;
                mn=min(s2,mn);
            }
            if(abs(n-y)%d==0)
            {
                ok=1;
                s3=ceil((double)abs(n-x)/d)+abs(n-y)/d;
                mn=min(mn,s3);
            }
        }
        if(ok==0)
            mn=-1;
        cout<<mn<<endl;
    }
}
