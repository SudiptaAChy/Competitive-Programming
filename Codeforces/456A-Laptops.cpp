#include<bits/stdc++.h>
using namespace std;
int a[1000009];
main()
{
    int n,i,val,val1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>val>>val1;
        a[val]=val1;
    }
    for(i=1;i<=100000;i++)
    {
        if(a[i]!=0 && a[i+1]!=0 && a[i]>a[i+1])
        {
            cout<<"Happy Alex";
            exit(0);
        }
    }
    cout<<"Poor Alex";
}
