#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll win(ll p)
{
    if(p*9<n && p*18>=n) return 0;
    if(win(p*2)==0 || win(p*3)==0 || win(p*4)==0 || win(p*5)==0 || win(p*6)==0 || win(p*7)==0 || win(p*8)==0 || win(p*9)==0)
        return 1;
    return 0;
}
main()
{
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==1) puts("Ollie wins.");
        else if(n>=2 && n<=9) puts("Stan wins.");
        else if(win(1)==1)puts("Stan wins.");
        else puts("Ollie wins.");
    }
}
