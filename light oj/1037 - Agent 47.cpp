#include <bits/stdc++.h>
#define pb push_back
#define sf scanf
#define pf printf
#define inf 1000000000
#define pii pair<ll, ll>
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
#define ll long long

int Set(int N, int pos)
{
    return N = N | (1 << pos);
}
bool Check(int N, int pos) { return (bool)(N & (1 << pos)); }
int Reset(int N, int pos) { return N = N & ~(1 << pos); }
int ceil(int a, int b) { return (a + b - 1) / b; }

const int N = 2e6 + 9;
int n, health[20], com, p[30][30], dp[1 << 17];
char s[109];

int f(int mask)
{
    if (mask == com)
        return 0; // if all combination applied

    int &ret = dp[mask];
    if (ret != -1)
        return ret;

    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        if (Check(mask, i) == 0) // checking who is alive
        {
            for (int j = 0; j <= n; j++)
            {
                if (Check(mask, j) && p[j][i - 1] > 0) // checking who is killed so that his gun can be used
                {
                    int shot = ceil(health[i], p[j][i - 1]);
                    if (shot > 0)
                    {
                        ans = min(ans, shot + f(Set(mask, i))); // kill him
                    }
                }
            }
        }
    }

    return ret = ans;
}
void slv()
{
    sf("%d", &n);
    for (int i = 1; i <= n; i++)
        sf("%d", &health[i]);
    for (int i = 1; i <= n; i++)
    {
        sf("%s", s);
        for (int j = 0; j < n; j++)
            p[i][j] = s[j] - '0';
    }
    for (int i = 0; i < n; i++)
        p[0][i] = 1;
    com = (1 << (n + 1)) - 1;
    memset(dp, -1, sizeof dp);
    pf("%d\n", f(1));
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
