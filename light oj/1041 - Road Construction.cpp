#include<bits/stdc++.h>
using namespace std;
struct edge {
    int u,v;
    int w;
};
bool operator < (edge e1, edge e2)
{
    return e1.w<e2.w;
}
vector<edge>e;
map<string,int>mp;
int pr[123456];
int fnd(int r)
{
    return (pr[r]==r)?r:fnd(pr[r]);
}
int kruskal(int n)
{
    sort(e.begin(),e.end());
    for(int i=1;i<=n;i++) pr[i]=i;
    int cnt=0,s=0;
    int sz=e.size();
    for(int i=0;i<sz;i++)
    {
        int u=fnd(e[i].u);
        int v=fnd(e[i].v);
        if(u!=v)
        {
            pr[u]=v;
            cnt++;
            s+=e[i].w;
        }
    }
    if(cnt!=n-1) return -1;
    else return s;
}
main()
{
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        cin>>n;
        int val=1;
        while(n--)
        {
            string a,b;
            int c;
            cin>>a>>b>>c;
            if(mp[a]==0) {
                mp[a]=val;
                val++;
            }
            if(mp[b]==0) {
                mp[b]=val;
                val++;
            }
            edge get;
            get.u=mp[a];
            get.v=mp[b];
            get.w=c;
            e.push_back(get);
        }
        int ans=kruskal(val-1);
        if(ans==-1) printf("Case %d: Impossible\n",cs);
        else printf("Case %d: %d\n",cs,ans);
        e.clear();
        mp.clear();
        memset(pr,0,sizeof pr);
    }
}
