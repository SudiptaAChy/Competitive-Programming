#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(void)
{
    ll n,i,j,no=0;
    vector<ll>a,s;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        a.push_back(j);
    }
    s=a;
    sort(a.begin(),a.end());
    if(a[0]==a[1])
    {
        puts("Still Rozdil");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(a[0]==s[i])
        {
            cout<<i+1;
            break;
        }
    }
}
