#include<bits/stdc++.h>
#define sz 100006
#define pii pair<ll,ll>
#define ll long long
#define INT_MAX 10000000000000
using namespace std;
vector<pii>v[sz];
vector<ll>dis(sz,INT_MAX);
ll parent[sz];
void dijkstra(ll s)
{
    priority_queue<pii, vector<pii>, greater<pii> >pq;   ///sorting in ascending order in base of first element of pair
    pq.push(make_pair(0,s)); ///weight - node
    dis[s]=0;
    parent[s]=-1;
    while(!pq.empty())
    {
        pii top=pq.top();
        pq.pop();
        ll d=top.first,u=top.second;
        for(auto it:v[u])
        {
            ll v1=it.first,v2=it.second; /// v1 = node v2 = weight as pair
            if(dis[u]+v2<dis[v1])
            {
                dis[v1]=dis[u]+v2;
                parent[v1]=u;
                pq.push(make_pair(dis[v1],v1));
            }
        }
    }
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n,e,x,y,w;
    cin>>n>>e;
    while(e--)
    {
        cin>>x>>y>>w;
        v[x].push_back(make_pair(y,w));
        v[y].push_back(make_pair(x,w));
    }
    dijkstra(1);
    if(dis[n]>=INT_MAX)
    {
        cout<<"-1";
        return 0;
    }
    stack<ll>s;
    s.push(n);
    while(n!=1)
    {
        s.push(parent[n]);
        n=parent[n];
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
