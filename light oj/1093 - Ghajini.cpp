#include<bits/stdc++.h>
#define mx 1000009
#define sf scanf
#define pf printf
using namespace std;
int a[mx];
int max_tre[mx],min_tre[mx];
void setre(int st,int en,int node)
{
    if(st==en)
    {
        max_tre[node]=a[st];
        min_tre[node]=a[st];
        return ;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(st+en)/2;
    setre(st,mid,left);
    setre(mid+1,en,right);
    max_tre[node]=max(max_tre[left],max_tre[right]);
    min_tre[node]=min(min_tre[left],min_tre[right]);
}
int maxquery(int st,int en,int node,int i,int j)
{
    if(st>=i && en<=j) return max_tre[node];
    if(i>en || j<st) return 0;
    int left=2*node;
    int right=2*node+1;
    int mid=(st+en)/2;
    int q1=maxquery(st,mid,left,i,j);
    int q2=maxquery(mid+1,en,right,i,j);
    return max(q1,q2);
}
int minquery(int st,int en,int node,int i,int j)
{
    if(st>=i && en<=j) return min_tre[node];
    if(i>en || j<st) return INT_MAX;
    int left=2*node;
    int right=2*node+1;
    int mid=(st+en)/2;
    int q1=minquery(st,mid,left,i,j);
    int q2=minquery(mid+1,en,right,i,j);
    return min(q1,q2);
}
main()
{
    int t,n,d;
    sf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int ma=0;
        sf("%d%d",&n,&d);
        for(int i=0;i<n;i++) sf("%d",&a[i]);
        setre(0,n-1,1);
        for(int i=0;i<n-d;i++)
        {
            int v1=maxquery(0,n-1,1,i,i+d-1);
            int v2=minquery(0,n-1,1,i,i+d-1);
            ma=max(ma,(v1-v2));
        }
        pf("Case %d: %d\n",cs,ma);
    }
}
