#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,i,j;
    cin>>n;
    int a[n+1],b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=i+1;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    return 0;
}
