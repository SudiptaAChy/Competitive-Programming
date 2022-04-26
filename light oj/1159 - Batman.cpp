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
string s, t, w;
int dp[60][60][60];
int LCS(int i, int j, int k)
{
    if (i == s.size() || j == t.size() || k == w.size())
        return 0;

    int &ret = dp[i][j][k];
    if (ret != -1)
        return ret;

    ret = 0;
    if (s[i] == t[j] && t[j] == w[k])
        ret = 1 + LCS(i + 1, j + 1, k + 1);
    else
    {
        ret = max(ret, LCS(i + 1, j, k));
        ret = max(ret, LCS(i, j + 1, k));
        ret = max(ret, LCS(i, j, k + 1));
        ret = max(ret, LCS(i + 1, j + 1, k));
        ret = max(ret, LCS(i + 1, j, k + 1));
        ret = max(ret, LCS(i, j + 1, k + 1));
    }

    return ret;
}
void slv()
{
    memset(dp, -1, sizeof dp);
    cin >> s >> t >> w;
    cout << LCS(0, 0, 0) << endl;
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
