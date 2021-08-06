#include<bits/stdc++.h>
#define N 5000001
using namespace std;
typedef long long ll;
set<int>adj[N];
int c[N];
int main(void)
{
    set<int>st;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>c[i],st.insert(c[i]);
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        if(c[u] != c[v])
        {
            adj[c[u]].insert(c[v]);
            adj[c[v]].insert(c[u]);
        }
    }
    int mx=0,mxclr=INT_MAX;
    for(auto it : st)
    {
        if(adj[it].size() > mx)
        {
            mx=adj[it].size();
            mxclr=it;
        }
        else if(adj[it].size() == mx)
        {
            //cout<<it<< " " << adj[it].size()<<endl;
            mxclr = min(it,mxclr);
        }
    }
    cout<<mxclr<<endl;
    return 0;
}
