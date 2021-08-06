#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[1000009];
main()
{
    ios_base::sync_with_stdio(0);
    ll n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    ll sum1=0,sum2=0,sum3=0;
    ll s1=0,s2=0,s3=0;
    ll hi=n-1,lo=0;
    while(lo<=hi)
    {
        if(s1<s3)
        {
            s1+=a[lo];
            lo++;
        }
        else
        {
            s3+=a[hi];
            hi--;
        }
        if(s1==s3) sum1=s1;
    }
    cout<<sum1;
}
