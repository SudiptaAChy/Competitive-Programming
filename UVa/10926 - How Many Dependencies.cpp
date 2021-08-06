#include <bits/stdc++.h>
#define N 209
using namespace std;
typedef long long ll;
vector<int>adj[N];
int n,mxlen;
bool vis[N];
void dfs(int s)
{
    vis[s]=1;
    mxlen++;
    for(auto v : adj[s])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
}
int main()
{
//    freopen("in.txt", "r", stdin);

    while(scanf("%d",&n) && n)
    {
        for(int i=1;i<=n;i++)
        {
            int m; adj[i].clear();
            scanf("%d",&m);
            while(m--)
            {
                int u;
                scanf("%d",&u);
                adj[i].push_back(u);
            }
        }
        int anslen=0,ansid=1;
        memset(vis,0,sizeof vis);
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                mxlen=0;
                dfs(i);
                if(mxlen > anslen)
                {
                    anslen=mxlen;
                    ansid=i;
                }
                memset(vis,0,sizeof vis);
            }
        }
        printf("%d\n",ansid);
    }

    return 0;
}
