#include<bits/stdc++.h>
using namespace std;
int a[100009];
main()
{
    int n,t=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        while(a[i-1]>=a[i])
        {
            t++;
            a[i]++;
        }
    }
    cout<<t;
}

