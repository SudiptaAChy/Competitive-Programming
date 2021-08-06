#include<bits/stdc++.h>
using namespace std;
multiset<int>a[10009],b[10009];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,x;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>x;
            a[i+j].insert(x);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>x;
            b[i+j].insert(x);
        }
    }
    for(int i=0;i<n+m;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
