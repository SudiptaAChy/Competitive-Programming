#include <bits/stdc++.h>
#define N 209
#define pi pair<int,int>
using namespace std;
typedef long long ll;
int main()
{
//    freopen("in.txt", "r", stdin);

    int cs=1;
    string s;
    while(cin>>s && s!="end")
    {
        int ans=0;
        vector<int>v[12345];
        for(int i=0;i<s.size();i++)
        {
            bool ok=0;
            for(int k=0;k<ans;k++)
            {
                if(s[i]-'A' <= v[k].back())
                {
//                    cout<<i<<" X "<<s[i]<<" k "<<k<<" "<<v[k].back()<<endl;
                    v[k].push_back(s[i]-'A');
                    ok=1;
                    break;
                }
            }
            if(!ok)
            {
                v[ans++].push_back(s[i]-'A');
            }
        }
        printf("Case %d: %d\n",cs++,ans);
    }

    return 0;
}

