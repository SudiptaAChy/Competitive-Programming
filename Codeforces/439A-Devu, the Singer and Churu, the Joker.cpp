#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,d,i,j,s=0,t,to;
    cin>>n>>d;
    int a[n+1];
    for(i=0;i<n;i++) { cin>>a[i];
    s+=a[i];
    }
    to=(s+(n-1)*10);
    if(to>d)
    {
        cout<<"-1";
        return 0;
    }
    t=(n-1)*2+((d-to)/5);
    cout<<t;
}
