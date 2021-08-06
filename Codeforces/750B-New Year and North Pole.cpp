#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,d,t=0;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>d>>s;
        if(t==0 && s!="South")
        {
            cout<<"NO";
            return 0;
        }
        if(t==20000 && s!="North")
        {
            cout<<"NO";
            return 0;
        }
        if(s=="South")
            t+=d;
        if(s=="North")
            t-=d;
        if(t>20000 || t<0)
        {
            cout<<"NO";
            return 0;
        }
    }
    if(t==0) cout<<"YES";
    else cout<<"NO";
}
