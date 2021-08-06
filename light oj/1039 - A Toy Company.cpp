#include<bits/stdc++.h>
using namespace std;
const int sz=30;
bool vis[sz][sz][sz];
int dis[sz][sz][sz];
string st,en;
int dx[] = {0, 0, 1, 0, 0, -1};
int dy[] = {0, 1, 0, 0, -1, 0};
int dz[] = {1, 0, 0, -1, 0, 0};
void bfs(void)
{
    queue<int>q1,q2,q3;
    dis[st[0]-'a'][st[1]-'a'][st[2]-'a']=0;
    q1.push(st[0]-'a');
    q2.push(st[1]-'a');
    q3.push(st[2]-'a');
    vis[st[0]-'a'][st[1]-'a'][st[2]-'a']=1;

    while(!q1.empty())
    {
        int u1=q1.front();
        q1.pop();
        int u2=q2.front();
        q2.pop();
        int u3=q3.front();
        q3.pop();

        if(u1==(en[0]-'a') && u2==(en[1]-'a') && u3==(en[2]-'a')) break;

        for(int k=0;k<6;++k)
        {
            int v1=(dx[k]+u1+26)%26;
            int v2=(dy[k]+u2+26)%26;
            int v3=(dz[k]+u3+26)%26;

            if(!vis[v1][v2][v3])
            {
                dis[v1][v2][v3]=dis[u1][u2][u3]+1;
                vis[v1][v2][v3]=1;
                q1.push(v1);
                q2.push(v2);
                q3.push(v3);
            }
        }
    }
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        memset(vis,false,sizeof vis);
        memset(dis,-1,sizeof dis);

        cin>>st>>en;
        int n;
        scanf("%d",&n);
        for(int l=0;l<n;l++)
        {
            string s1,s2,s3;
            cin>>s1>>s2>>s3;
            for(int i=0;i<s1.size();++i)
            {
                for(int j=0;j<s2.size();++j)
                {
                    for(int k=0;k<s3.size();++k)
                    {
                        vis[s1[i]-'a'][s2[j]-'a'][s3[k]-'a']=true;
                    }
                }
            }
        }
        printf("Case %d: ",cs);
        if(vis[st[0]-'a'][st[1]-'a'][st[2]-'a'] || vis[en[0]-'a'][en[1]-'a'][en[2]-'a'])
        {
            puts("-1");
            continue;
        }
        bfs();
        printf("%d\n",dis[en[0]-'a'][en[1]-'a'][en[2]-'a']);
    }
    return 0;
}
