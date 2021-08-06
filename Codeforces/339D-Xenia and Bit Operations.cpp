#include<bits/stdc++.h>
#define ll long long
#define mx 1999999
using namespace std;
int a[mx];
struct info{
    int sum,step;
} tree[mx*5];
void setre(int node,int b,int e)
{
    if(b==e)
    {
        tree[node].sum = a[b];
        tree[node].step++;
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    setre(left,b,mid);
    setre(right,mid+1,e);
    tree[node].step=tree[left].step+1;
    if(tree[node].step%2==0)
        tree[node].sum=(tree[left].sum | tree[right].sum);
    else
        tree[node].sum=(tree[left].sum ^ tree[right].sum);
}
void update(int node,int b,int e,int pos,int val)
{
    if(pos>e || pos<b) return;
    if(pos==b && pos==e)
    {
        tree[node].sum=val;
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    update(left,b,mid,pos,val);
    update(right,mid+1,e,pos,val);
    if(tree[node].step%2==0)
        tree[node].sum=(tree[left].sum | tree[right].sum);
    else
        tree[node].sum=(tree[left].sum ^ tree[right].sum);
}
main(void)
{
    memset(tree,0,sizeof tree);
    int n,q,p,b;
    cin>>n>>q;
    n=pow(2,n);
    for(int i=0;i<n;i++) cin>>a[i];
    setre(1,0,n-1);
    while(q--)
    {
        cin>>p>>b;
        update(1,0,n-1,p-1,b);
        cout<<tree[1].sum<<endl;
    }
}
