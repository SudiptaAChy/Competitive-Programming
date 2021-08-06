#include<bits/stdc++.h>
#define mx 1000009
using namespace std;
int a[mx],s[mx];
main()
{
    int n,i,j;
    int x,y;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s[a[i]]++;
    }
    sort(a,a+n);
    x=a[n-1];
    for(i=0;i<n;i++)
    {
        if(x%a[i]!=0 || s[a[i]]>1)
        {
            v.push_back(a[i]);
        }
    }
    if(v.size()==0)
        y=0;
    else {
        sort(v.begin(),v.end());
        y=v[v.size()-1];
    }
    cout<<x<<" "<<y;
}
