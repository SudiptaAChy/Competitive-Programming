#include <bits/stdc++.h>
#define pb push_back
#define sf scanf
#define pf printf
#define inf 1e9
#define pii pair<ll, ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long
const int N = 2e6 + 9;
int n, a[N], lis[N], lds[N];
void LIS()
{
    int val = 0;
    vector<int> d(n + 1, inf);
    d[0] = -inf;
    d[n] = inf;
    for (int i = 0; i < n; i++)
    {
        int j = lower_bound(d.begin(), d.end(), a[i]) - d.begin();
        d[j] = a[i];
        val = max(val, j);
        lis[i] = val;
    }
}
void LDS()
{
    int val = 0;
    vector<int> d(n + 1, inf);
    d[0] = -inf;
    d[n] = inf;
    for (int i = n - 1; i >= 0; i--)
    {
        int j = lower_bound(d.begin(), d.end(), a[i]) - d.begin();
        d[j] = a[i];
        val = max(val, j);
        lds[i] = val;
    }
}
void slv()
{
    sf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sf("%d", &a[i]);
        lis[i] = lds[i] = 0;
    }
    LIS();
    LDS();
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = max(ans, min(lis[i], lds[i]));
    pf("%d\n", 2 * ans - 1);
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
        printf("Case %d: ", cas);
        slv();
    }
    return 0;
}
