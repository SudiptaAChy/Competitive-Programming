#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,i,k,f,t,j,ma=-1000000009;
    cin>>n>>k;
    while(n--)
    {
        cin>>f>>t;
        if(t>k)
        {
            j=f-(t-k);
        }
        else
            j=f;
        if(j>ma)
            ma=j;
    }
    cout<<ma;
}
