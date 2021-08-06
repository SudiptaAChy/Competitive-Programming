#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+2];
        int s=0;
        for(int i=0;i<n;i++) {cin>>a[i]; s+=a[i];}
        cout<<s%2<<endl;
    }
}
