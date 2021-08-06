#include<bits/stdc++.h>
using namespace std;
struct edge {
    int u,v;
    double w;
};
bool operator < (edge e1, edge e2)
{
    return e1.w<e2.w;
}
vector<edge>e;
int pr[123456];
double dist(int x1,int y1,int x2,int y2)
{
    return sqrt((x1-x2)*1.0*(x1-x2)+(y1-y2)*(y1-y2));
}
int fnd(int r)
{
    return (pr[r]==r)?r:fnd(pr[r]);
}
double kruskal(int n,int n1)
{
    sort(e.begin(),e.end());
    for(int i=0;i<=n1;i++) pr[i]=i;
    double s=0.0;
    int cnt=n1,sz=e.size();
    for(int i=0;i<sz;i++)
    {
        int u=fnd(e[i].u);
        int v=fnd(e[i].v);
        if(u!=v)
        {
            cnt--;
            pr[u]=v;
            s=e[i].w;
            if(cnt==n) break;
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
        int s,p;
        scanf("%d%d",&s,&p);
        int x[p+10],y[p+10];
        for(int i=0;i<p;i++) scanf("%d%d",&x[i],&y[i]);
        for(int i=0;i<p;i++)
        {
            if(i!=p-1) {
            for(int j=i+1;j<p;j++)
            {
                edge get;
                get.u=i;
                get.v=j;
                get.w=dist(x[i],y[i],x[j],y[j]);
                e.push_back(get);
            }
            }
        }
        //cout<<kruskal(s,p)<<endl;
        printf("%.2lf\n",kruskal(s,p));
        e.clear();
    }
}
