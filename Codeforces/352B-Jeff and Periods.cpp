#include<bits/stdc++.h>
using namespace std;
int a[1000009],b[1000009],c[1000009],d[1000009],cmn[1000009];
main(void)
{
    int n,i,j,k,l=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        a[k]++;
        if(a[k]>1)
        {
            d[k]=abs(c[k]-i);
            if(d[k]!=cmn[k])
                a[k]=-100000;
            cmn[k]=d[k];
        }
        c[k]=i;
    }
    for(i=1;i<=100000;i++)
        if(a[i]!=0)
            l++;
    cout<<l<<endl;
    for(i=1;i<=100000;i++)
    {
        if(a[i]!=0)
        {
            cout<<i<<" "<<d[i];
            cout<<endl;
        }
    }
}
