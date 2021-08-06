#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n,x1,x2,y1,y2,z1,z2;
        int tx1,tx2,ty1,ty2,tz1,tz2;
        tx1=ty1=tz1=INT_MIN;
        tx2=ty2=tz2=INT_MAX;
        int ans;
        scanf("%d",&n);
        while (n--)
        {
            scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
            tx1=max(tx1,x1),ty1=max(ty1,y1),tz1=max(tz1,z1);
            tx2=min(tx2,x2),ty2=min(ty2,y2),tz2=min(tz2,z2);
        }
        ans = max(0, (tx2-tx1)*(ty2-ty1)*(tz2-tz1));
        printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}