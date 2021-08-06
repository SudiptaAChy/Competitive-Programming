#include<bits/stdc++.h>
#define mx 1009
#define mp make_pair
using namespace std;



vector<int>prime;
bool pri[mx];
void pri1()
{
    for(int i=2;i<mx;i++) pri[i]=true;
    for(int i=2;i*i<=mx;i++)
    {
        for(int j=i+i;j<mx;j+=i)
        {
            if(pri[i]==true)
                pri[j]=false;
        }
    }
    for(int i=2;i<mx;i++)
        if(pri[i]==true)
            prime.push_back(i);
}



bool visited[mx];
void bfs(int st,int en)
{
    queue< pair<int,int> >q;
    q.push(mp(st,0));
    visited[st]=true;
    while(!q.empty())
    {
        int fr=q.front().first;
        int sc=q.front().second;
        q.pop();
        if(fr==en)
        {
            printf("%d\n",sc);
            return;
        }
        for(int i=0;prime[i]<fr;++i)
        {
            if((fr%prime[i]==0) && (fr+prime[i])<=en && (visited[fr+prime[i]]==false))
            {
                q.push(mp(fr+prime[i],sc+1));
                visited[fr+prime[i]]=true;
            }
        }
    }
    printf("-1\n");
}
main()
{
    pri1();
    int te,s,t;
    scanf("%d",&te);
    for(int cas=1;cas<=te;cas++)
    {
        memset(visited,false,sizeof visited);
        scanf("%d%d",&s,&t);
        printf("Case %d: ",cas);
        bfs(s,t);
    }
}
