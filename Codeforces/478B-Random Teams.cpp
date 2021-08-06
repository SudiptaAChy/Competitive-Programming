#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(void)
{
    ll n,m,k1,k2;
    ll team,team1,cl,fr;
    scanf("%lld%lld",&n,&m);
    if(m==1 && n==1)
    {
        printf("0 0");
        return 0;
    }
    if(m==1)
    {
        if(n==1)
            k1=k2=1;
        else
        {
            k1=k2=n*(n-1)/2;
        }
        printf("%lld %lld",k1,k2);
        return 0;
    }
    team=n/m;
    team1=ceil(n*1.0/m);
    k1=(n%m)*(team1*(team1-1))/2+(m-(n%m))*(team*(team-1))/2;
    team=n-m+1;
    k2=team*(team-1)/2;
    printf("%lld %lld",k1,k2);
}
