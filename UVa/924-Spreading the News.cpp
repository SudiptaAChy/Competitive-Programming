#include<bits/stdc++.h>
#define WHITE 1
#define GREY 2
#define BLACK 3
using namespace std;
int e,t,mxt,mxd,total,n,fr,tes,day;
int adj[1000][1000]={-1},color[1000];
void bfs(int stnode)
{
    for(int i=0;i<e;i++) color[i]=WHITE;
    queue<int>q;
    q.push(stnode);
    while(!q.empty())
    {
        total=0;
        int x=q.front();
        q.pop();
        color[x]=GREY;
        cout<<x<<" ";
        for(int i=0;i<e;i++)
        {
            if(adj[x][i]==1)
            {
                if(color[i]==WHITE)
                {
                    q.push(i);
                    adj[x][i]=-1;
                    total++;
                }
            }
        }
        day++;
        color[x]=BLACK;
        cout<<"day = "<<day<<" total = "<<total<<endl;
        if(total>mxt)
        {
            mxt=total;
            mxd=day;
        }
    }
}
main()
{
    int st=0;
    cin>>e;
    for(int i=0;i<e;i++)
    {
        cin>>n;
        while(n--)
        {
            cin>>fr;
            adj[i][fr]=1;
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>tes;
        total=day=mxt=mxd=0;
        bfs(tes);
        if(mxt==0)cout<<"0"<<endl;
        else
            cout<<mxt<<" "<<mxd<<endl;
    }
}
