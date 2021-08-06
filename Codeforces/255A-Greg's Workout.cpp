#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,i,c=0,b=0,ba=0;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i+=3) c+=a[i];
    for(i=1;i<n;i+=3) b+=a[i];
    for(i=2;i<n;i+=3) ba+=a[i];
    ///cout<<c<<endl<<b<<endl<<ba<<endl;
    if(c>b && c>ba) cout<<"chest";
    else if(b>c && b>ba) cout<<"biceps";
    else if(ba>c && ba>b) cout<<"back";
}
