#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,i,j;
    int a[10009];
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1])>1)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
