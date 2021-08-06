#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool a[10000009],b[10000009];
void setprime(ll x,ll y,bool z[])
{
    ll i,j;
    for(i=2;i<=10000000;i++)
        z[i]=true;
    for(i=2;i<=10000000;i++)
    {
        for(j=i+i;j<=10000000;j+=i)
        {
            if(z[i]==true)
                z[j]=false;
        }
    }
}
int main(void)
{
    ll i,n,j;
    a[1]=false;

    return 0;
}
