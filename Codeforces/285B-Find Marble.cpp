#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,s,t,i,total=0,nai=0;
    cin>>n>>s>>t;
    int a[n+2];
    for(i=1;i<=n;i++) cin>>a[i];
    int st=a[s];
    if(s==t)
    {
        cout<<"0";
        return 0;
    }
    while(1)
    {
        total++;
        if(st==t)
            break;
        if(a[st]==s)
        {
            nai=1;
            break;
        }
        st=a[st];
    }
    if(nai==1)
        cout<<"-1";
    else
        cout<<total;
}
