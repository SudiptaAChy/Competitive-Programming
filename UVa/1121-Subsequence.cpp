#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[1000009];
int main()
{
    ll n,s,i,j;
    while(scanf("%lld%lld",&n,&s)!=EOF)
    {
        ll lo=0,hi=n-1,sum,len=0,ans=n+1;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
int temp;
        sum=a[0];
        while(hi<n)
        {
            if( sum >= s )
            {
                temp = hi - lo + 1 ;
                if( temp < ans ) ans = temp ;
            }
            if( sum >= s && lo < hi )
            {
                sum -= a[lo];
                lo++;
            }
            else if( sum < s )
            {
                hi++;
                if( hi < n )
                sum += a[hi];
            }
            if(temp==ans) ans=0;
            printf("%lld\n",ans);
        }
    }
    return 0;
}
