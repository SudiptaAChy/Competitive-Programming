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
        tree[node].sum = arr[b]-'0';
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
}

void update(int node, int b, int e, int i, int j)
{
    if(b>e) return;
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * 1);
        tree[node].prop += 1;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j);
    update(Right, mid + 1, e, i, j);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}

ll query(int node, int b, int e, int i, int j, ll carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    int Left = node*2;
    int Right = (node*2) + 1;
    int mid = (b + e)/2;

    ll p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    ll p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,q,len,l,r;
    string com;
    cin>>t;
    for(int cs=1;cs<=t;cs++)
    {
        printf("Case %d:\n",cs);
        memset(tree,0,sizeof tree);
        cin>>arr;
        len=strlen(arr);
        init(1,0,len-1);
        cin>>q;
        while(q--)
        {
            cin>>com;
            if(com[0]=='I')
            {
                cin>>l>>r;
                update(1,0,len-1,l-1,r-1);
            }
            else
            {
                cin>>l;
                printf("%lld\n",query(1,0,len-1,l-1,l-1)%2);
            }
        }
    }
    return 0;
}
