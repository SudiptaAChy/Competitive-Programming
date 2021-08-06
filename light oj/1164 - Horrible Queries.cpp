#include <bits/stdc++.h>
#define mx 300009
#define ll long long
using namespace std;
char arr[mx];
struct info {
    ll prop, sum;
} tree[mx * 4];

void init(int node, int b, int e)
{
    if (b == e) {
        tree[node].sum = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
}

void update(int node, int b, int e, int i, int j, ll x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}

ll query(int node, int b, int e, int i, int j, ll carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    ll p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    ll p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}

int main() {

    int t,n,q,x,y,cm,v;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        memset(arr,0,sizeof arr);
        memset(tree,0,sizeof tree);
        printf("Case %d:\n",cs);
        scanf("%d%d",&n,&q);
        init(1,0,n-1);
        while(q--)
        {
            scanf("%d",&cm);
            if(cm==0)
            {
                scanf("%d%d%d",&x,&y,&v);
                update(1,0,n-1,x,y,v);
            }
            else
            {
                scanf("%d%d",&x,&y);
                printf("%lld\n",query(1,0,n-1,x,y));
            }
        }
    }
    return 0;
}
