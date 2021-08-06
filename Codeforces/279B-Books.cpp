#include<bits/stdc++.h>
#define mx 1000009
using namespace std;
int a[mx];
main()
{
    int n,t,en,st=0,total=0,sum=0;
    cin>>n>>t;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(sum>t)
        {
            sum-=a[st++];
        }
        total=max(total,i-st+1);
    }
    cout<<total;
}
