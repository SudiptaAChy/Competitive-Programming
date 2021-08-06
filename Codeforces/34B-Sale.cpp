#include<bits/stdc++.h>
using namespace std;
int a[299999];
main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    int t=0,s=0;
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {
        if(a[i]<0)
        {
            s+=a[i]*(-1);
        }
    }
    cout<<s;
}
