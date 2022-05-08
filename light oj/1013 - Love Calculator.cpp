#include <bits/stdc++.h>
#define pb push_back
#define sf scanf
#define pf printf
#define inf 1000000000
#define pii pair<ll, ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long
const int N = 2e5 + 9;
ll len, n, m, dp[50][50], dp1[50][50][50];
string a, b;
ll LCS(ll i, ll j)
{
    if (i == n || j == m)
        return 0LL;
    ll &ret = dp[i][j];
    if (ret != -1)
        return ret;
    ret = 0;
    if (a[i] == b[j])
        ret = 1 + LCS(i + 1, j + 1);
    else
        ret = max(LCS(i + 1, j), LCS(i, j + 1));
    return ret;
}
ll f(ll i, ll j, ll val)
{
    // cout << i << " " << j << " " << val << " " << n << " " << m << endl;
    if (i == n || j == m)
    {
        val += n + m - i - j;
        return (val == len);
    }

    ll &ret = dp1[i][j][val];
    if (ret != -1)
        return ret;

    ret = 0LL;
    if (val >= len)
        return ret;

    if (a[i] == b[j])
    {
        ret = f(i + 1, j + 1, val + 1);
    }
    else
    {
        ret += f(i + 1, j, val + 1);
        ret += f(i, j + 1, val + 1);
    }

    return ret;
}
void slv()
{
    memset(dp, -1, sizeof dp);
    memset(dp1, -1, sizeof dp1);
    cin >> a >> b;
    n = a.size();
    m = b.size();
    len = n + m - LCS(0, 0);
    cout << len << " " << f(0, 0, 0) << endl;
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
        // printf("Case #%d: ", cas);
        cout << "Case " << cas << ": ";
        slv();
    }
    return 0;
}
