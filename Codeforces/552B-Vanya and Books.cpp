#include<bits/stdc++.h>
#define ll long long
#define mx 1000000000
using namespace std;
main()
{
    ll n,ans,i,j,k;
    ll dig=0;
    scanf("%lld",&n);
    if(n<10)
    {
        dig=n;
    }
    else
    {
        for(i=10,j=2;i<=mx;i*=10,j++)
        {
            k=n/i;
            if(k<10)
            {
                dig+=abs(n-i+1)*j;
                break;
            }
            dig+=i*9*j;
        }
        dig+=9;
    }
    cout<<dig;
}

