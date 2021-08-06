#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,s,x,y,mx=-100;
    cin>>n>>s;
    while(n--)
    {
        cin>>x>>y;
        if(s*100>=(x*100)+y)
        {
            int d=100-y;
            if(d==100) d=0;
            mx=max(mx,d);
        }
    }
    if(mx==-100) cout<<"-1";
    else cout<<mx;
}
