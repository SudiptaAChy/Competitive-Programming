#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector< int >v[1234];
vector<int>ans;
int div(int n)
{
    int s=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            s++;
            int x=n/i;
            if(x!=i) s++;
        }
    }
    return s;
}
main()
{
    for(int i=1;i<=1000;i++)
    {
        int k=div(i);
        v[k].push_back(i);
    }
    for(int i=1;i<=100;i++)
    {
        sort(v[i].rbegin(),v[i].rend());
    }
    for(int i=1;i<=100;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            ans.push_back(v[i][j]);
        }
    }
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",cs,ans[n-1]);
    }
}
