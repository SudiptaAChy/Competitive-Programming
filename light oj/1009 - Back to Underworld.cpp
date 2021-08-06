#include<bits/stdc++.h>
#define mx 100009
#define BLACK 1
#define WHITE 2
#define RED 3
using namespace std;
vector<int>adj[mx];
int ans,vamp,lyk,color[mx];
void clr()
{
    for(int i=0;i<mx;i++)
    {
        adj[i].clear();
        color[i]=WHITE;
    }
}
void bfs(int s)
{
    color[s]=BLACK;
    queue<int>q;
    vamp++;
    q.push(s);
    while(!q.empty())
    {
        int z=q.front();
        q.pop();
        for(int i=0;i<adj[z].size();++i)
        {
            int y=adj[z][i];
            if(color[y]==WHITE)
            {
                q.push(y);
                if(color[z]==BLACK)
                {
                    color[y]=RED;
                    lyk++;
                }
                else
                {
                    color[y]=BLACK;
                    vamp++;
                }
            }
        }
    }
}
main()
{
    int t,n,i,j,u,v;
    cin>>t;
    for(int cas=1;cas<=t;cas++)
    {
        ans=0;
        clr();
        cin>>n;
        while(n--)
        {
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0;i<mx;i++)
        {
            if(!adj[i].empty() && color[i]==WHITE)
            {
                vamp=0,lyk=0;
                bfs(i);
                ///cout<<"vmp = "<<vamp<<" "<<lyk<<endl;
                ans+=max(vamp,lyk);
            }
        }
        printf("Case %d: %d\n",cas,ans);
    }
}
