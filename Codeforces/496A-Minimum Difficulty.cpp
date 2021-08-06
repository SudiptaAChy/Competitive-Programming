#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,i,j,s,mi=100000,ma,diff,k;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=1;i<n-1;i++)
    {
        s=a[i];
        a[i]=-1;
        ma=-1000000;
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]==-1)
            {
                k=j+2;
                diff=a[k]-a[j];
            }
            else if(a[j]==-1)
            {
                continue;
            }
            else
                diff=a[j+1]-a[j];
            if(diff>ma)
                ma=diff;
            ///cout<<"diff = "<<diff<<endl;
        }
        ///cout<<endl;
        a[i]=s;
        if(ma<mi)
            mi=ma;
        ///cout<<"mi = "<<mi<<endl;
    }
    cout<<mi;
}
/*
10
300 315 325 338 350 365 379 391 404 416
*/
