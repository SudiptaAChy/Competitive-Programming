#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(void)
{
    ll pend=0,n,m,a,total;
    cin>>n>>m;
    while(n--)
    {
        cin>>a;
        a+=pend;
        if(a%m==0)
        {
            total=a/m;
            pend=a%m;
            cout<<total<<" ";
        }
        else
        {
            total=a/m;
            pend=a%m;
            cout<<total<<" ";
        }
    }
}

