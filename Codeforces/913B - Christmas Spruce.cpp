#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector< int >v[10009];
void dfs(int st)
{
    if(v[st].size()<3)
    {
        puts("NO");
        exit(0);
    }
    int cnt=0;
    for(int i=0;i<v[st].size();i++)
    {
        int u=v[st][i];
        int sz=v[u].size();

        if(sz==0)
            cnt++;
        else
            dfs(u);
    }
    if(cnt<3)
    {
        puts("NO");
        exit(0);
    }
}
int main()
{
    int n,p;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        cin>>p;
        v[p].push_back(i);
    }
    dfs(1);
    puts("YES");
    return 0;
}
