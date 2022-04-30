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
ll n, dp[35][35][2][2], k;

ll f(ll pos, ll cnt, ll pre, bool isSmall)
{
    if (pos >= n)
    {
        return cnt;
    }

    ll &ret = dp[pos][cnt][pre][isSmall];
    if (ret != -1)
        return ret;

    ret = 0LL;
    ll lo = 0LL, hi = 1LL;
    if (!isSmall)
        hi = s[pos] - '0';
    for (ll i = lo; i <= hi; i++)
    {
        bool small = isSmall | (i < hi);
        ret += f(pos + 1, cnt + (pre == 1 && i == 1), i, small);
    }

    return ret;
}

string to_bin_string(int x)
{
    string res = "";
    while (x)
    {
        res += (x % 2) + '0';
        x /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

void slv()
{
    ll a;
    cin >> a;
    s = to_bin_string(a);
    n = s.size();
    memset(dp, -1, sizeof dp);
    cout << f(0, 0, 0, 0) << endl;
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
