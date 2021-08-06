#include<bits/stdc++.h>
#define sf(a) scanf("%d",&a);
#define pf(a) printf("%d\n",a)
using namespace std;
const int N = 1e5+99;
const int block=sqrt(N)+1;
struct query {
    int l,r,id;
} q[N];
bool cmp(query a, query b)
{
    if(a.l/block == b.l/block) return a.r < b.r;
    else return a.l/block < b.l/block;
}
int a[N],ans=0,Q,n,cnt[N],output[N];
void add(int v)
{
    if(v<=n)
    {
        if(cnt[v] == v) ans --;
        cnt[v] ++;
        if(cnt[v] == v) ans ++;
    }
}
void remove(int v)
{
    if(v<=n)
    {
        if(cnt[v] == v) ans --;
        cnt[v] --;
        if(cnt[v] == v) ans ++;
    }
}
int main()
{
    sf(n);
    sf(Q);
    for(int i=0;i<n;i++) sf(a[i]);
    for(int i=0;i<Q;i++) {
        sf(q[i].l);
        sf(q[i].r);
        q[i].id=i;
        q[i].l--,q[i].r--;
    }
    sort(q,q+Q,cmp);
    int l=0,r=-1;
    for(int i=0;i<Q;i++)
    {
        int lo=q[i].l,hi=q[i].r;
        while(l>lo) add(a[--l]);
        while(r<hi) add(a[++r]);
        while(l<lo) remove(a[l++]);
        while(r>hi) remove(a[r--]);
        output[q[i].id]=ans;
    }
    for(int i=0;i<Q;i++) pf(output[i]);
    return 0;
}