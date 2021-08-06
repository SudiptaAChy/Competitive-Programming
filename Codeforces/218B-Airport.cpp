#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,m,i,j,ma=0,mi=0,plane,n1,n2,s=0;
    cin>>n>>m; ///n=passenger ; m=plane
    n1=n2=n;
    int a[m+10],b[m+10];
    for(i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    for(i=0;i<m;i++)
    {
        mi+=(a[i]*(a[i]+1))/2;
        n2-=a[i];
        if(n2==0)
            break;
    }
    st:
    sort(a,a+m);
    int lim=(n<m)?n:m;
    for(i=lim-1;i>=0;i--)
    {
        ma+=a[i];
        a[i]-=1;
        n1-=1;
        s++;
        if(s==n)
            goto en;
    }
    goto st;
    en:
    cout<<ma<<" "<<mi;
}
