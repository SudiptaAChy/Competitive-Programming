#include<bits/stdc++.h>
using namespace std;
main()
{
    string s,t,ans="";
    cin>>s>>t;
    ans=s;
    for(int i=ans.size()-1;i>=0;i--)
    {
        if(ans[i]=='z') ans[i]='a';
        else
        {
            ans[i]+=1;
            break;
        }
    }
    if(ans<t) cout<<ans;
    else cout<<"No such string";
}
