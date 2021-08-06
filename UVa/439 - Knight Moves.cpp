#include<bits/stdc++.h>
using namespace std;
bool visited[10][10];
int total[10][10];
int fx[]={1, -1, 1, -1, 2, 2, -2, -2};
int fy[]={2, 2, -2, -2, 1, -1, 1, -1};
int bfs(int a,int b,int c,int d)
{
    visited[a][b]=true;
    total[a][b]=0;
    queue< pair<int,int> >q;
    q.push(make_pair(a,b));
    while(!q.empty())
    {
        pair<int,int>p;
        p=q.front();
        q.pop();
        if(p.first==c && p.second==d)
        {
            return total[p.first][p.second];
        }
        for(int i=0;i<8;i++)
        {
            int ax=p.first+fx[i];
            int ay=p.second+fy[i];
            if ( (ax>0 && ax<=8) && (ay>0 && ay<=8) && visited[ax][ay]==false)
            {
                visited[ax][ay]=true;
                q.push(make_pair(ax,ay));
                total[ax][ay]=total[p.first][p.second]+1;
            }
        }
    }
}
main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        memset(visited,false,sizeof visited);
        int a=s1[0]-'a'+1;
        int b=s1[1]-'0';
        int c=s2[0]-'a'+1;
        int d=s2[1]-'0';
        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<bfs(a,b,c,d)<<" knight moves.\n";
    }
}
