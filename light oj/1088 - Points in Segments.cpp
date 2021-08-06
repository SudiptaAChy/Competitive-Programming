#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,q,l,r,x,x1,x2;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        vector<int>v;
        scanf("%d%d",&n,&q);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x);
            v.push_back(x);
        }
        printf("Case %d:\n",cs);
        sort(v.begin(),v.end());
        while(q--)
        {
            scanf("%d%d",&l,&r);
            x1=lower_bound(v.begin(),v.end(),l)-v.begin();
            x2=upper_bound(v.begin(),v.end(),r)-v.begin();
            x=abs(x1-x2);
            printf("%d\n",x);
        }
    }
    return 0;
}
