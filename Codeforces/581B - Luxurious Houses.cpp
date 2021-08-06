#include <bits/stdc++.h>
#define sz 123456
using namespace std;
typedef long long ll;
ll a[sz];
int main()
{
    ll n,mx;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mx=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]<=mx)
        {
            a[i]=mx-a[i]+1;
        }
        else
        {
            mx=a[i];
            a[i]=0;
        }
    }
    a[n-1]=0;
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}
