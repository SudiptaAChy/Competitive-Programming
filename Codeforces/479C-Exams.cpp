#include<bits/stdc++.h>
#define pi pair<int,int>
using namespace std;
vector<pi>v;
bool cmp(pi a,pi b)
{
    return a.second<b.second;
}
main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int day=-1;
    for(int i=0;i<n;i++)
    {
        if(day<=v[i].second)
            day=v[i].second;
        else
            day=v[i].first;
    }
    cout<<day;
}
