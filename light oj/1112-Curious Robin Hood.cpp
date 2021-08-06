#include<bits/stdc++.h>
#define mx 1000009
using namespace std;
int a[mx],tree[mx*3];
void setre(int node,int st,int en)
{
    if(st==en)
    {
        tree[node]=a[st];
        return;
    }
    int left=2*node,right=2*node+1,mid=(st+en)/2;
    setre(left,st,mid);setre(right,mid+1,en);
    tree[node]=tree[left]+tree[right];
}
int query(int node,int st,int en,int i,int j)
{
    if(i>en || j<st)
        return 0;
    if(st>=i && en<=j)
        return tree[node];
    int left=2*node,right=2*node+1,mid=(st+en)/2;
    return query(left,st,mid,i,j)+query(right,mid+1,en,i,j);
}
void update(int node,int st,int en,int i,int val)
{
    if(i>en || i<st)
        return ;
    if(st==i && en==i)
    {
        tree[node]=val;
        return;
    }
    int left=2*node,right=2*node+1,mid=(st+en)/2;
    update(left,st,mid,i,val);
    update(right,mid+1,en,i,val);
    tree[node]=tree[left]+tree[right];
}
int main(void)
{
    int t,no,i,j,n,val,q,l,r,op;
    scanf("%d",&t);
    for(no=1;no<=t;no++)
    {
        printf("Case %d:\n",no);
        scanf("%d%d",&n,&q);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        setre(1,0,n-1);
        while(q--)
        {
            scanf("%d",&op);
            if(op==1)
            {
                scanf("%d",&l);
                printf("%d\n",query(1,0,n-1,l,l));
                update(1,0,n-1,l,0);
            }
            else if(op==2)
            {
                scanf("%d%d",&l,&r);
                val=r+query(1,0,n-1,l,l);
                update(1,0,n-1,l,val);
            }
            else
            {
                scanf("%d%d",&l,&r);
                printf("%d\n",query(1,0,n-1,l,r));
            }
        }
    }
    return 0;
}
