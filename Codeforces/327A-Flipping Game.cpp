#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,i,j,on=0,zr=0;
    int total=0;
    cin>>n;
    int a[10009];
    for(i=0;i<n;i++) cin>>a[i];
    int lo=0,hi=n-1;
    while(lo<hi)
    {
        while(a[lo]!=1)
        {
            cout<<"1"<<endl;
            lo++;
            total++;
        }
        while(a[hi]==1)
        {
            cout<<"2"<<endl;
            total++;
            hi--;
        }
        for(i=lo;i<=hi;i++)
        {
            cout<<"1"<<endl;
            if(a[i]==0)
                zr++;
            else
                on++;
        }
        if(zr>=on)
            total+=zr;
        else
            total+=on;
    }
    cout<<total<<endl;
}
