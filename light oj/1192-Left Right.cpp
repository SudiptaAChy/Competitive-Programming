#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,cas,i,k,a,b,ans;
    cin>>t;
    for(cas=1;cas<=t;cas++)
    {
        cin>>k;
        vector<int>v;
        ans=0;
        for(i=0;i<k;i++)
        {
            cin>>a>>b;
            v.push_back(b-a-1);
        }
        for(i=0;i<v.size();i++)
            ans^=v[i];
        if(ans>0) printf("Case %d: Alice\n",cas);
        else printf("Case %d: Bob\n",cas);
    }
}
