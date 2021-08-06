#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void)
{
    ll n,i,j,m,q,total=0,v;
    ll x[1000000]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v;
        x[v]++;
    }
    for(i=0;i<100001;i++)
    {
        total+=x[i];
        x[i]=total;
    }
    cin>>q;
    while(q--)
    {
        cin>>m;
        if(m<100001)
            cout<<x[m]<<endl;
        else
            cout<<n<<endl;
    }
    return 0;
}
