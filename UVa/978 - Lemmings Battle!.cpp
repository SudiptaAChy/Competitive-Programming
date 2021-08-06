#include <bits/stdc++.h>
#define N 209
#define pi pair<int,int>
using namespace std;
typedef long long ll;
int main()
{
//    freopen("in.txt", "r", stdin);

    int tt;
    cin>>tt;
    while(tt--)
    {
        int b,sb,sg;
        priority_queue<int>p1,p2;
        cin>>b>>sb>>sg;
        while(sb--)
        {
            int v;
            cin>>v;
            p1.push(v);
        }
        while(sg--)
        {
            int v;
            cin>>v;
            p2.push(v);
        }
        while(true)
        {
            if(p1.empty() || p2.empty()) break;
            vector< pair<int,int> >v;
            for(int i=0;i<b;i++)
            {
                if(p1.empty() || p2.empty()) break;
                v.push_back({p1.top(),p2.top()});
                p1.pop(),p2.pop();
            }
            for(int i=0;i<v.size();++i)
            {
                int d=abs(v[i].first-v[i].second);
                if(v[i].first>v[i].second)
                {
                    p1.push(d);
                }
                else if(v[i].first<v[i].second)
                {
                    p2.push(d);
                }
            }
        }

        if(p1.empty() && p2.empty())
        {
            puts("green and blue died");
        }
        else if(!p1.empty() && p2.empty())
        {
            puts("green wins");
            while(!p1.empty())
            {
                cout<<p1.top()<<endl;
                p1.pop();
            }
        }
        else if(p1.empty() && !p2.empty())
        {
            puts("blue wins");
            while(!p2.empty())
            {
                cout<<p2.top()<<endl;
                p2.pop();
            }
        }

        if(tt) puts("");
    }

    return 0;
}
