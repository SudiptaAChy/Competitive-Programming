#include <bits/stdc++.h>
#define pb push_back
#define sf scanf
#define pf printf
#define inf 1000000000
#define pii pair<ll, ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long

string s;
ll n, dp[12][82][82][2], k;

ll f(ll pos, ll rem, ll remDig, bool isSmall)
{
    if (pos >= n)
    {
        return (rem + remDig == 0);
    }

    ll &ret = dp[pos][rem][remDig][isSmall];
    if (ret != -1)
        return ret;

    ret = 0LL;
    ll lo = 0LL, hi = 9LL;
    if (!isSmall)
        hi = s[pos] - '0';
    for (ll i = lo; i <= hi; i++)
    {
        bool small = isSmall | (i < hi);
        ret += f(pos + 1, (rem * 10 + i) % k, (remDig + i) % k, small);
    }

    return ret;
}

ll cal(ll x)
{
    s = to_string(x);
    n = s.size();
    memset(dp, -1, sizeof dp);
    return f(0, 0, 0, 0);
}

void slv()
{
    ll a, b;
    sf("%lld %lld %lld", &a, &b, &k);
    if (k >= 82)
        puts("0");
    else
        pf("%lld\n", cal(b) - cal(a - 1));
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
        // cout << "Case " << cas << ": ";
        slv();
    }
    return 0;
}
