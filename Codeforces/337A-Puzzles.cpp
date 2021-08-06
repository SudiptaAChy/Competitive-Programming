#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,m,i,j,total=0,val,diff,mini=10000;
    vector<int>v;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(),v.end());
    for(i=0;i<=m-n;i++)
    {
        val=abs(v[i]-v[i+n-1]);
        mini=min(mini,val);
    }
    cout<<mini<<endl;
}
