#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,m,i,j,s=0,t=0;
    int a[1009];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        t=a[i];
        for(j=i+1;j<n;j++)
        {
            t+=a[j];
            if(t>m)
            {
                t=0;
                break;
            }
        }
        ///cout<<"j = "<<j<<endl;
        i=j-1;
        s++;
    }
    cout<<s;
}
