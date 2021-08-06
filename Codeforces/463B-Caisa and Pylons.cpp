#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,mx=0,a;
    cin>>n;
    while(n--)
    {
        cin>>a;
        mx=max(mx,a);
    }
    cout<<mx;
}
