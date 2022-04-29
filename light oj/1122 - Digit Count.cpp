#include <bits/stdc++.h>
#define pb push_back
#define sf scanf
#define pf printf
#define inf 1000000000
#define pii pair<ll, ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long

const int N = 2e6 + 9;
int n, m, a[20], dp[20][20];

int f(int i, int rem)
{
    if (rem == 0)
        return 1;

    int &ret = dp[i][rem];
    if (ret != -1)
        return ret;

    ret = 0;
    for (int j = 0; j < m; j++)
    {
        if (i == j)
        {
            ret += f(j, rem - 1);
        }
        else if (abs(a[i] - a[j]) <= 2)
        {
            ret += f(j, rem - 1);
        }
    }

    return ret;
}

void slv()
{
    memset(dp, -1, sizeof dp);
    sf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        sf("%d", &a[i]);

    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int val = f(i, n - 1);
        ans += val;
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
        printf("Case %d: ", cas);
        // cout << "Case " << cas << ": ";
        slv();
    }
    return 0;
}
