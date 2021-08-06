#include<bits/stdc++.h>
#define ll long long
using namespace std;
int prim(ll n)
{
    ll i,len;
    len=sqrt(n)+1;
    for(i=2;i<=len;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main(void)
{
    ll n,i,j,len;
    scanf("%lld",&n);
    if(n%2==0)
    {
        if(n==2)
            printf("1");
        else
            printf("2");
    }
    else
    {
        if(prim(n)==0)
            printf("1");
        else
        {
            if(prim(n-2)==0)printf("2");
            else
            printf("3");
        }
    }
    return 0;
}
