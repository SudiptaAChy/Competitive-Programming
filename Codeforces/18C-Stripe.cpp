#include<bits/stdc++.h>
using namespace std;
int a[1000009];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,s=0,to=0,s1=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        s1+=a[i];
        if(s1==s-s1)
            to++;
    }
    cout<<to;
}
