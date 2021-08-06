#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll maxi=0,mini=1000000000;
ll b[1000009];
main(void)
{
    ll n,i;
    ll way,mm=0,mimi=0,sam=0,allone=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]>maxi)
            maxi=b[i];
        if(b[i]<mini)
            mini=b[i];

    }
    for(i=0;i<n;i++)
    {
        if(b[i]==maxi)
            mm++;
        if(b[i]==mini)
            mimi++;
    }
    if(maxi==mini)
        way=(n*(n-1))/2;
    else
        way=mm*mimi;
    cout<<maxi-mini<<" "<<way;
}
