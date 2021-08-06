#include<bits/stdc++.h>
using namespace std;
int a[1000009]={0};
main(void)
{
    int k,l,m,n,d,total=0;
    int i,j;
    cin>>k>>l>>m>>n>>d;
    for(i=k;i<=d;i+=k)
    {
        a[i]++;
        total++;
    }
    for(i=l;i<=d;i+=l)
    {
        if(a[i]==0)
        {
            a[i]++;
            total++;
        }
    }
    for(i=m;i<=d;i+=m)
    {
        if(a[i]==0)
        {
            a[i]++;
            total++;
        }
    }
    for(i=n;i<=d;i+=n)
    {
        if(a[i]==0)
        {
            a[i]++;
            total++;
        }
    }
    cout<<total<<endl;
}
