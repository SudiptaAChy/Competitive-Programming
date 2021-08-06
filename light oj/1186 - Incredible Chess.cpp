#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,j,k,ok,ans;
    cin>>t;
    for(int cas=1;cas<=t;cas++)
    {
        cin>>k;
        int a[k+1],b[k+1];
        ans=0;
        vector<int>v;
        for(i=0;i<k;i++)
            cin>>a[i];
        for(i=0;i<k;i++)
            cin>>b[i];
        for(i=0;i<k;i++)
            v.push_back(b[i]-a[i]-1);
        for(i=0;i<v.size();i++)
            ans^=v[i];
        if(ans>0) printf("Case %d: white wins\n",cas);
        else printf("Case %d: black wins\n",cas);
    }
}
