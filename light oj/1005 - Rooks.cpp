/**
 * solution = (n^2*(n-1)^2*(n-2)^2*....*(n-k+1)^2)/k!
 *          = (nck)^2 * k!
 */
#include <bits/stdc++.h>
#define pb push_back
#define sf scanf
#define pf printf
#define inf 2e16
#define pii pair<ll, ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long
const int N = 2e5 + 9;
ll f[100];
ll dp[100][100];
ll ncr(ll n, ll r)
{
    if (n == r || r == 0)
        return 1;
    else if (r == 1)
        return n;
    ll &ret = dp[n][r];
    if (ret != -1)
        return ret;
    ret = ncr(n - 1, r) + ncr(n - 1, r - 1);
    return ret;
}
void slv()
{
    ll n, k;
    sf("%lld %lld", &n, &k);
    if (k > n)
    {
        puts("0");
    }
    else
    {
        ll ans = ncr(n, k);
        ans = ans * ans * f[k];
        pf("%lld\n", ans);
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    f[0] = f[1] = 1LL;
    for (ll i = 2LL; i <= 20; i++)
        f[i] = f[i - 1] * i;
    memset(dp, -1, sizeof dp);
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
