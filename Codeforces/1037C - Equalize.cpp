#include<bits/stdc++.h>
using namespace std;
int n,total;
string a,b;
main()
{
    cin>>n>>a>>b;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==b[i+1] && a[i+1]==b[i] && a[i]!=a[i+1] && b[i]!=b[i+1])
        {
            swap(a[i],a[i+1]);
            total++;
        }
    }
    for(int i=0;i<n;i++)
        if(a[i]!=b[i])
            total++;
    cout<<total;
}
