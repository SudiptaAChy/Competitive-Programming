#include<bits/stdc++.h>
using namespace std;
int a[10009];
main()
{
    int n,s=0,d=0;
    int dt=0,st=1;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int hi=n-1,lo=0;
    while(lo<=hi)
    {
        if(st==1 && dt==0)
        {
            if(a[lo]>=a[hi])
            {
                s+=a[lo];
                lo++;
            }
            else
            {
                s+=a[hi];
                hi--;
            }
            dt=1;
            st=0;
        }
        else if(st==0 && dt==1)
        {
            if(a[lo]>=a[hi])
            {
                d+=a[lo];
                lo++;
            }
            else
            {
                d+=a[hi];
                hi--;
            }
            dt=0;
            st=1;
        }
    }
    cout<<s<<" "<<d;
}
