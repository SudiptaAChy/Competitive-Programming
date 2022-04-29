#include <bits/stdc++.h>
#define pb push_back
#define sf scanf
#define pf printf
#define inf 1000000000
#define pii pair<ll, ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long
ll n, m, q, d, a[209], dp[209][21][11];
ll f(ll i, ll m, ll rem)
{
    if (rem == 0LL)
    {
        return (m == 0LL);
    }
    if (i >= n)
        return 0LL;

    ll &ret = dp[i][m][rem];
    if (ret != -1)
        return ret;

    ll ans = 0LL;
    ans += f(i + 1, m, rem);
    ans += f(i + 1, (m + (a[i] % d) + d) % d, rem - 1);

    return ret = ans;
}
void slv()
{
    sf("%lld %lld", &n, &q);
    for (int i = 0; i < n; i++)
        sf("%lld", &a[i]);
    while (q--)
    {
        memset(dp, -1, sizeof dp);
        sf("%lld %lld", &d, &m);
        pf("%lld\n", f(0, 0, m));
    }
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
        printf("Case %d:\n", cas);
        // cout << "Case " << cas << ": ";
        slv();
    }
    return 0;
}
