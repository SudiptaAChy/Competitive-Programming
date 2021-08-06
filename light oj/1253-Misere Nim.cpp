#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,j,k,ok,ans;
    cin>>t;
    for(int cas=1;cas<=t;cas++)
    {
        cin>>k;
        int a[k+1];
        ans=ok=0;
        for(i=0;i<k;i++)
        {
            cin>>a[i];
            ans^=a[i];
            if(a[i]!=1) ok=1;
        }
        if(ok==0)
        {
            if(k%2==0) printf("Case %d: Alice\n",cas);
            else printf("Case %d: Bob\n",cas);
        }
        else
        {
            if(ans==0) printf("Case %d: Bob\n",cas);
            else printf("Case %d: Alice\n",cas);
        }
    }
}
