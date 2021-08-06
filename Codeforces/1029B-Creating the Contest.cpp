#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,i,j,total=1,lo,hi;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++) cin>>a[i];
    lo=0,hi=n-1;
    while(lo<hi)
    {
        j=lo;
        while(j+1<n && 2*a[j]>=a[j+1])
            j++;
        total=max(total,j-lo+1);
        lo=j;
        lo++;
    }
    cout<<total<<endl;
}
