#include<bits/stdc++.h>
#define pii pair<int,int>
# define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;
void prims(vector<pii>adj[],int n,int src)
{
    priority_queue< pii, vector<pii>, greater<pii> >pq;
    vector<int>key(n,INF);
    vector<bool>visited(n,false);
    key[src]=0;
    pq.push(make_pair(0,src));
    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();
        visited[u]=true;
        for(auto x : adj[u])
        {
            int v = x.first;
            int wt = x.second;
            if(visited[v]==false && key[v]>wt)
            {
                key[v]=wt;
                pq.push(make_pair(key[v],v));
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++) cout<<" k - "<<key[i]<<endl;
}
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m) && n!=0 && m!=0)
    {
        int u,v,w;
        vector<pii>adj[n+10];
        while(m--)
        {
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }
        prims(adj,n,0);
    }
    return 0;
}
