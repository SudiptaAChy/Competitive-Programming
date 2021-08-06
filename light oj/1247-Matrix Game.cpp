#include<bits/stdc++.h>
using namespace std;
int s[1009];
int main()
{
    int t,cas;
    int r,c,ans,a,val;
    cin>>t;
    for(cas=1;cas<=t;cas++)
    {
        val=0;
        memset(s,0,sizeof(s));
        cin>>r>>c;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a;
                s[i]+=a;
            }
        }
        for(int i=0;i<r;i++)
            val^=s[i];
        if(val!=0) printf("Case %d: Alice\n",cas);
        else printf("Case %d: Bob\n",cas);
    }
    return 0;
}

