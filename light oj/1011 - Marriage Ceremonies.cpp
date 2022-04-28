#include <bits/stdc++.h>
#define pb push_back
#define sf scanf
#define pf printf
#define inf 1e9
#define pii pair<ll, ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long
const int N = 2e6 + 9;
int a[100][100], n;
int dp[(1 << 18) + 2];

int Set(int N, int pos) { return N = N | (1 << pos); }
bool Check(int N, int pos) { return (bool)(N & (1 << pos)); }
int Reset(int N, int pos) { return N = N & ~(1 << pos); }

int bitMask(int pos, int mask)
{
    if (pos == n)
        return 0;
    if (mask == (1 << n) - 1)
        return 0;

    if (dp[mask] != -1)
        return dp[mask];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (Check(mask, i) == 0)
        {
            ans = max(ans, a[pos][i] + bitMask(pos + 1, Set(mask, i)));
        }
    }

    return dp[mask] = ans;
}

void slv()
{
    memset(dp, -1, sizeof dp);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    cout << bitMask(0, 0) << endl;
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
