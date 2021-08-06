#include<bits/stdc++.h>
#define mx 1000009
using namespace std;
int a[mx];
vector<int>v;
main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
            cout<<a[i]<<" ";
    }
    for(int i=n;i>=1;i--)
    {
        if(i%2==0)
            cout<<a[i]<<" ";
    }
}
