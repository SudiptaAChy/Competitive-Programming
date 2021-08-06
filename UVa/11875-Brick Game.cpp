#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a[100],t,n,i,no=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        printf("Case %d: %d\n",no++,a[n/2]);
    }
    return 0;
}
