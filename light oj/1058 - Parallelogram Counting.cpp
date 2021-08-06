#include<bits/stdc++.h>
#define ll long long
#define sz 1234567
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        vector<pair<int,int> >v;
        scanf("%d",&n);
        int x[n+10],y[n+10];
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&x[i],&y[i]);
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int d1=x[i]+x[j];
                int d2=y[i]+y[j];
                v.push_back(make_pair(d1,d2));
            }
        }
        sort(v.begin(),v.end());
        int ans=0,cnt=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first == v[i+1].first && v[i].second == v[i+1].second)
            {
                cnt+=1;
            }
            else
            {
                ans+=(cnt*(cnt+1))/2;
                cnt=0;
            }
        }
        printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}
