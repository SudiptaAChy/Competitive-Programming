#include<bits/stdc++.h>
using namespace std;
struct edge {
    int u,v,w;
};
bool operator < (edge e1,edge e2)
{
    return e1.w<e2.w;
}
int pr[123456];
vector<edge>e;
int fnd(int r)
{
    return (pr[r]==r)?r:fnd(pr[r]);
}
int kruskal(int n)
{
    for(int i=0;i<=n;i++) pr[i]=i;
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
            //if(cnt==n-1) break;
        }
    }
    return s;
}
main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        scanf("%d",&n);
        while(1)
        {
            edge get;
            scanf("%d%d%d",&get.u,&get.v,&get.w);
            if(get.u==0 && get.v==0 && get.w==0) break;
            e.push_back(get);
        }
        int total=0;
        sort(e.begin(),e.end());
        total+=kruskal(n);
        sort(e.rbegin(),e.rend());
        total+=kruskal(n);
        if(total%2==0)  printf("Case %d: %d\n",cs,total/2);
        else printf("Case %d: %d/2\n",cs,total);
        e.clear();
        memset(pr,0,sizeof pr);
    }
}
