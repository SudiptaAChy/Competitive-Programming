#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long ll;

int getdigit(char c)
{
    if ('0' <= c && c <= '9')
        return int(c - '0');

    return int(c - 'A') + 10;
}

ll dp[(1 << 17)][21];

void solve()
{
    int base, k;
    cin >> base >> k;

    string str;
    cin >> str;

    int len = str.length();
    int compmask = (1 << len) - 1;

    memset(dp, 0, sizeof(dp));

    dp[0][0] = 1;

    for (int mask = 0; mask < (1 << len); mask++)
    {
        for (int idx = 0; idx < len; idx++)
        {
            if (mask & (1 << idx))
                continue;
            for (int rem = 0; rem < k; rem++)
            {
                int dig = getdigit(str[idx]);
                dp[mask | (1 << idx)][(rem * base + dig) % k] += dp[mask][rem];
            }
        }
    }

    cout << dp[compmask][0] << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    fast;
    int t = 1;
    cin >> t;

    for (int i = 1; i < t + 1; i++)
    {
        cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}