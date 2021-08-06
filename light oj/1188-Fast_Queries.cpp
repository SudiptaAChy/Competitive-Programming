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
    cnt[v] ++;
    if(cnt[v] == 1) ans ++;
}
void remove(int v)
{
    cnt[v] --;
    if(cnt[v] == 0) ans --;
}
int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    cin >> t;
    for(int casee=1;casee<=t;casee++) {
        printf("Case %d:\n",casee);
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
        ans=0;
        memset(cnt,0,sizeof cnt);
        memset(a,0,sizeof a);
        memset(output,0,sizeof output);
    }
    return 0;
}
