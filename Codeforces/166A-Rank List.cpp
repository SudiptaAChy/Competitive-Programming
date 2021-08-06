#include<bits/stdc++.h>
using namespace std;
main(void)
{
    int n,k,total=1;
    int i,j;
    cin>>n>>k;
    int a[n+1],t[n+1],s[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>t[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                swap(a[i],a[j]);
                swap(t[i],t[j]);
            }
            else if(a[i]==a[j])
            {
                if(t[i]>t[j])
                {
                    swap(a[i],a[j]);
                    swap(t[i],t[j]);
                }
            }
        }
    }
    for(i=k-1;i<n-1;i++)
    {
        if(a[i]==a[i+1] && t[i]==t[i+1])
            total++;
        else
            break;
    }
    for(i=k-1;i>=0;i--)
    {
        if(a[i]==a[i-1]&&t[i]==t[i-1])
            total++;
        else
            break;
    }
    cout<<total<<endl;
}
