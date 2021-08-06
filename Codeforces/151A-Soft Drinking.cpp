#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink,salt,lime,t1,t2,t3,mi;
    t1=k*l/nl;
    t2=c*d/n;
    t3=p/np;
    t1/=n,t3/=n;
    mi=min(t1,t2);
    mi=min(mi,t3);
    cout<<mi;
}
