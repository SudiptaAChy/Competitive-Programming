#include <bits/stdc++.h>
using namespace std;

int price[100][100], n;
int dp[(1 << 15) + 2];

int Set(int N, int pos) { return N = N | (1 << pos); }
bool Check(int N, int pos) { return (bool)(N & (1 << pos)); }
int Reset(int N, int pos) { return N = N & ~(1 << pos); }

int bitMask(int mask)
{
    if (mask == (1 << n) - 1)
        return 0;

    if (dp[mask] != -1)
        return dp[mask];

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (Check(mask, i) == 0)
        {
            int p = price[i][i];
            for (int j = 0; j < n; j++)
            {
                if (i != j && Check(mask, j) != 0)
                    p += price[i][j];
            }
            ans = min(ans, p + bitMask(Set(mask, i)));
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
            cin >> price[i][j];
    }
    cout << bitMask(0) << endl;
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
