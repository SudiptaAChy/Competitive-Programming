#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    scanf("%lld%lld",&n,&m);
    ll age=m-1;
    ll pore=n-m;
    if(n==1) cout<<"1";
    else if(age<pore)
        cout<<m+1;
    else cout<<age;
    return 0;
}

