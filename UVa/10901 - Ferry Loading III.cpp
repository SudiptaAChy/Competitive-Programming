#include <bits/stdc++.h>
#define LEFT 0
#define RIGHT 1
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
        map<int,int>mp;
        int n,t,m;
        cin>>n>>t>>m;
        vector< queue<pi> >car(2);
        for(int i=0;i<m;i++)
        {
            int art;string side;
            cin>>art>>side;
            if(side=="left") car[LEFT].push({i,art});
            else car[RIGHT].push({i,art});
        }
        int time=0;
        int idx=LEFT;

        while(! (car[LEFT].empty() && car[RIGHT].empty()))
        {
            int earlycar=INT_MAX;
            if(!car[LEFT].empty()) earlycar=min(earlycar,car[LEFT].front().second);
            if(!car[RIGHT].empty()) earlycar=min(earlycar,car[RIGHT].front().second);

            time=max(time,earlycar);
            int cnt=0;

            while(!car[idx].empty() && cnt<n && car[idx].front().second<=time)
            {
                mp[car[idx].front().first]=time+t;
                car[idx].pop();
                cnt++;
            }

            time+=t;
            idx^=1;
        }
        for(int i=0;i<m;i++) cout<<mp[i]<<endl;
        if(tt) cout<<endl;
    }

    return 0;
}
