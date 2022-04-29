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
ll n, dp[15][500][2][2];

ll f(ll pos, ll value, bool isSmall, bool isStart)
{
    if (pos >= n)
        return value;

    ll &ret = dp[pos][value][isSmall][isStart];
    if (ret != -1)
        return ret;

    ret = 0LL;
    ll lo = 0, hi = 9;
    if (!isSmall)
        hi = s[pos] - '0';
    for (ll i = lo; i <= hi; i++)
    {
        bool small = isSmall | (i < hi);
        bool start = isStart | (i > 0);
        ret += f(pos + 1, value + (isStart && i == 0), small, start);
    }

    return ret;
}

ll cal(ll x)
{
    if (x < 0)
        return 0;
    if (x < 10)
        return 1;
    s = to_string(x);
    n = s.size();
    memset(dp, -1, sizeof dp);
    return f(0, 0, 0, 0) + 1;
}

void slv()
{
    ll a, b;
    cin >> a >> b;
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
