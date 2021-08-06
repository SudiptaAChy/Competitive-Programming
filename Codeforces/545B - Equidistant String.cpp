#include<bits/stdc++.h>
#define ll long long
#define sz 1000009
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int dis=0,n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i]) dis++;
    }
    if(dis%2!=0)
    {
        puts("impossible");
        return 0;
    }
    string ans=s;
    dis/=2;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            if(s[i]=='0')
            {
                ans[i]='1';
            }
            else
            {
                ans[i]='0';
            }
            k++;
            if(k==dis) break;
        }
    }
    cout<<ans;
    return 0;
}

