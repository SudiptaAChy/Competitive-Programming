#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int cs=1;cs<=t;cs++)
    {
        int n,m,ans;
        scanf("%d%d",&n,&m);
        if(n==1 || m==1)
        {
            ans=n*m;
        }
        else if(n==2 || m==2)
        {
            if(n==2) ans=m;
            else ans=n;
            if(ans%4==1 || ans%4==3) ans+=1;
            else if(ans%4==2) ans+=2;
        }
        else if((m*n)%2==0) ans=(m*n)/2;
        else
            ans=ceil((m*n*1.0)/2);
        printf("Case %d: %d\n",cs,ans);
    }
    return 0;
}
