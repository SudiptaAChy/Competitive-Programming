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
int dp[1009][1009];
string s, w, ans[1009][1009];
void slv()
{
    cin >> s >> w;

    int n = s.size();
    int m = w.size();

    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
        ans[i][0] = "";
    }
    for (int i = 0; i <= m; i++)
    {
        dp[0][i] = 0;
        ans[0][i] = "";
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s[i - 1] == w[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans[i][j] = ans[i - 1][j - 1] + s[i - 1];
            }
            else if (dp[i - 1][j] > dp[i][j - 1])
            {
                dp[i][j] = dp[i - 1][j];
                ans[i][j] = ans[i - 1][j];
            }
            else if (dp[i][j - 1] > dp[i - 1][j])
            {
                dp[i][j] = dp[i][j - 1];
                ans[i][j] = ans[i][j - 1];
            }
            else
            {
                dp[i][j] = dp[i - 1][j]; // it also can be dp[i][j-1]
                ans[i][j] = min(ans[i - 1][j], ans[i][j - 1]);
            }
        }
    }

    if (dp[n][m] == 0)
        puts(":(");
    else
    {
        cout << ans[n][m] << endl;
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
        printf("Case %d: ", cas);
        slv();
    }
    return 0;
}
