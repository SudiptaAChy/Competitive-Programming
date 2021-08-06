#include<bits/stdc++.h>
using namespace std;
int bit[100009];
main(void)
{
    int n,m,k,i,j,ok,t=0,d;
    int r1,r2;
    cin>>n>>m>>k;
    int a[m+2];
    for(i=0;i<m+1;i++) cin>>a[i];
    for(i=0;i<m;i++)
    {
        ok=0;d=a[m];
        while(1)
        {
            if(a[i]<=0 && d<=0)
                break;
            r1=a[i]%2;///cout<<a[i]<<" "<<r1<<endl;
            r2=d%2;///cout<<a[m]<<" "<<r2<<endl;
            if((r1==0 && r2==1) || (r1==1 && r2==0))
                ok++;
            a[i]/=2;
            d/=2;
        }
        if(ok<=k)
            t++;
    }
    cout<<t;
}
