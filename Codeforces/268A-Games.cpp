#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int n,i,j,total=0;
    cin>>n;
    int a[n+1],b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==b[j])
                total++;
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==b[j])
                total++;
        }
    }
    cout<<total;
    return 0;
}
