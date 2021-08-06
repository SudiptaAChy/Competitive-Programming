#include<bits/stdc++.h>
#define mx 1000009
#define ll long long
using namespace std;
vector<int>adj[mx];
bool visited[mx];
int color[mx];
int n;
void bip(int st)
{
    for(int i : adj[st])
    {
        if(visited[i]==false)
        {
            visited[i]=true;
            color[i]=!color[st];
            bip(i);
        }
    }
}
main()
{
    memset(visited,false,sizeof visited);
    memset(color,0,sizeof color);
    int u,v;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ///
    visited[1]=true;
    color[1]=1;
    bip(1);
    ll n1=0,n2=0,ans;
    for(int i=1;i<=n;i++)
    {
        if(color[i]==1) n1++;
        else if(color[i]==0) n2++;
    }
    ans=n1*n2-(n-1);
    cout<<ans<<endl;
}
