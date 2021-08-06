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
int pr[123456];
int fnd(int r)
{
    return (pr[r]==r)?r:fnd(pr[r]);
}
int kruskal(int n)
{
    vector<edge>tmp;
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
            tmp.push_back(e[i]);
        }
    }
    e.clear();
    e=tmp;
    if(cnt!=n-1) return -1;
    else return s;
}
main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n,w;
        scanf("%d%d",&n,&w);
        printf("Case %d:\n",cs);
        while(w--)
        {
            edge get;
            scanf("%d%d%d",&get.u,&get.v,&get.w);
            e.push_back(get);
            printf("%d\n",kruskal(n));
        }
        e.clear();
        //memset(pr,0,sizeof pr);
    }
}
