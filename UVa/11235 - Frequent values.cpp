#include<bits/stdc++.h>
#define pi pair<int,int>
#define pb push_back
#define pll pair<ll,ll>
#define inf 1e16
using namespace std;
typedef long long ll;

const int N = 5000009;
int n,q,l,r,a[N],cnt[N],start[N],tree[N];
map<int,int>vis,total;

void build(int node,int b,int e)
{
    if(b == e) {
        tree[node] = cnt[b];
        return ;
    }
    int left=2*node,right=left+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=max(tree[left], tree[right]);
}

int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b) return INT_MIN;
    if(b>=i && e<=j) return tree[node];
    int left=2*node,right=left+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return max(p1,p2);
}

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,q;
    while (scanf("%d",&n) & n!=0)
    {
        scanf("%d",&q);
        for(int i=1;i<=n;i++) {
            scanf("%d",&a[i]);
            total[a[i]] ++;
            if(vis[a[i]] == 0) {
                vis[a[i]]=i;
                start[i]=i;
            } else {
                start[i]=vis[a[i]];
            }
        }
        for(int i=1;i<=n;i++) {
            cnt[i]=total[a[i]];
        }
        /*for(int i=1;i<=n;i++) cout<<cnt[i]<<" ";
        cout<<endl;
        for(int i=1;i<=n;i++) cout<<start[i]<<" ";
        cout<<endl;*/
        build(1,1,n);
        while (q--)
        {
            scanf("%d %d",&l,&r);
            if(a[l] == a[r]) printf("%d\n",r-l+1);
            else {
                int k=start[l] + cnt[l];
                int cnt1=k-l;
                int cnt2=r-start[r]+1;
                int cnt3=query(1,1,n,k,start[r]-1);
                printf("%d\n",max(cnt1,max(cnt2,cnt3)));
            }
        }
        vis.clear();
        total.clear();
        memset(tree,0,sizeof tree);
    }
    return 0;
}
