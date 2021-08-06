#include<bits/stdc++.h>
#define mx 1000009
using namespace std;
int tree[mx*3],a[mx],mn;
int setre(int node,int st,int en)
{
    if(st==en)
    {
        tree[node]=a[st];
        return tree[node];
    }
    int left=2*node,right=2*node+1,mid=(st+en)/2;
    tree[node]=min(setre(left,st,mid),setre(right,mid+1,en));
    return tree[node];
}
int query(int node,int st,int en,int i,int j)
{
    if(i>en || j<st)
        return 100000;
    if(st>=i && en<=j)
        return tree[node];
    int left=2*node,right=2*node+1,mid=(st+en)/2;
    int p1=query(left,st,mid,i,j);
    int p2=query(right,mid+1,en,i,j);
    return min(p1,p2);
}
main(void)
{
    int t,no=1,n,q,i,j,l,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        printf("Case %d:\n",no++);
        setre(1,0,n-1);
        ///for(i=1;i<10;i++) cout<<tree[i]<<endl;
        while(q--)
        {
            scanf("%d%d",&l,&r);
            if(l==r)
                printf("%d\n",a[l-1]);
            else
                printf("%d\n",query(1,0,n-1,l-1,r-1));
        }
    }
}
