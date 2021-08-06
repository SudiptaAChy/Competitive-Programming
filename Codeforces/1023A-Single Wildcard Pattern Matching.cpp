#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m;
    string s,t;
    cin>>n>>m>>s>>t;
    int len,sz=s.size(),w=0;
    for(int i=0;i<sz;++i)
    {
        if(s[i]=='*')
        {
            w=1;
            len=i;
            break;
        }
    }
    ///cout<<len<<endl;
    if(w==0)
    {
        if(s!=t)
        {
            puts("NO");
            return 0;
        }
    }
    int j,fr=1,bk=1;
    for(int i=0;i<len;i++)
    {
        if(s[i]!=t[i])
        {
            cout<<"NO";
            return 0;
        }
        else t[i]='1';
    }
//    int res=n-1-len;
//    cout<<res<<endl;
    for(int i=n-1,j=m-1;i>len;i--,j--)
    {
        if(s[i]!=t[j] || t[j]=='1')
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
