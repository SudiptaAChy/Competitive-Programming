#include<bits/stdc++.h>
using namespace std;
int s[30];
main()
{
    int n;
    string a;
    cin>>n>>a;
    for(int i=0;i<n;i++)
        s[a[i]-'a']++;
    int ok=0,t=0;
    for(int i=0;i<30;i++)
    {
        if(s[i]==0)
            ok=1;
        else
        {
            t+=s[i]-1;
        }
    }
    if(ok==0 && t!=0) cout<<"-1";
    if(t>0 && n>26) cout<<"-1";
    else cout<<t;
}
