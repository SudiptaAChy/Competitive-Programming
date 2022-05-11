#include <bits/stdc++.h>
#define pb push_back
#define sf scanf
#define pf printf
#define inf 1000000000
#define pii pair<ll, ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long
const int N = 1e7 + 9;
ll tree[N];
void Update(int idx, int x, int n)
{
    while (idx <= n)
    {
        tree[idx] += x;
        idx += (idx & -idx);
    }
}
int Query(int idx)
{
    int sum = 0;
    while (idx > 0)
    {
        sum += tree[idx];
        idx -= (idx & -idx);
    }
    return sum;
}
void slv()
{
    memset(tree, 0, sizeof tree);
    ll n, a, ans = 0LL;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        ans += Query(N - 5) - Query(a);
        Update(a, 1, N - 5);
    }
    cout << ans << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    // t = 1;
    for (int cas = 1; cas <= t; cas++)
    {
        slv();
    }
    return 0;
}
